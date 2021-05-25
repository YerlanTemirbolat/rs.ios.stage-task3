//
//  TreeNode.h
//  ios.stage-task
//
//  Created by Yerlan on 5/24/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TreeNode : NSObject

@property(nonatomic, retain) NSNumber *value;
@property(nonatomic, retain, nullable) TreeNode *leftNode;
@property(nonatomic, retain, nullable) TreeNode *rightNode;

- (instancetype)initWithValue:(NSNumber *)value;
+ (instancetype)treeNodeWithValue:(NSNumber *)value;
+ (instancetype)treeFromPreorder:(NSMutableArray *)preorder;
- (NSArray<NSArray *> *)levelOrderTraversal;
- (void)appendLevelOrderTraversalResultsTo: (NSMutableArray *_Nonnull*_Nonnull)array;

@end

NS_ASSUME_NONNULL_END
