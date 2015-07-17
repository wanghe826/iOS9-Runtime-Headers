/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDBezierSubpath : NSObject {
    BOOL  mClosed;
    NSMutableArray * mNodes;
}

@property (nonatomic, readonly) BOOL allNodesSelected;
@property (nonatomic, readonly) TSUBezierPath *bezierPath;
@property (nonatomic, readonly) BOOL canDeleteSelectedNodes;
@property (nonatomic, readonly) BOOL closeIfEndpointsAreEqual;
@property (getter=isClosed, nonatomic) BOOL closed;
@property (nonatomic, readonly) TSDBezierNode *firstNode;
@property (nonatomic, readonly) BOOL hasSelectedNode;
@property (nonatomic, readonly) BOOL isRectangular;
@property (nonatomic, readonly) TSDBezierNode *lastNode;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } nodeBounds;
@property (nonatomic, retain) NSMutableArray *nodes;

- (void)addNode:(id)arg1;
- (void)addNodesToArray:(id)arg1;
- (void)addTemporarySmoothNodes;
- (BOOL)allNodesSelected;
- (void)appendToBezierPath:(id)arg1;
- (void)appendToBezierPath:(id)arg1 selectedNodesOnly:(BOOL)arg2 fromIndex:(unsigned int)arg3;
- (id)bezierNodeUnderPoint:(struct CGPoint { float x1; float x2; })arg1 withTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 andTolerance:(float)arg3 returningType:(int*)arg4;
- (id)bezierPath;
- (struct CGPoint { float x1; float x2; })calculateNewControlFromOriginalDelta:(struct CGPoint { float x1; float x2; })arg1 currentDelta:(struct CGPoint { float x1; float x2; })arg2 originalSmoothDelta:(struct CGPoint { float x1; float x2; })arg3 node:(struct CGPoint { float x1; float x2; })arg4;
- (BOOL)canDeleteSelectedNodes;
- (BOOL)closeIfEndpointsAreEqual;
- (void)convertToHobby;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)deleteSelectedNodes;
- (id)description;
- (void)deselectAllNodes;
- (float)distanceToPoint:(struct CGPoint { float x1; float x2; })arg1 elementIndex:(unsigned int*)arg2 tValue:(float*)arg3 threshold:(float)arg4;
- (id)firstNode;
- (BOOL)hasSelectedNode;
- (id)init;
- (BOOL)isCircular;
- (BOOL)isClosed;
- (BOOL)isRectangular;
- (id)lastNode;
- (void)morphWithMorphInfo:(id)arg1;
- (id)nodeAfterNode:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })nodeBounds;
- (id)nodePriorToNode:(id)arg1;
- (id)nodes;
- (void)offsetSelectedEdgesByDelta:(struct CGPoint { float x1; float x2; })arg1;
- (void)offsetSelectedNodesByDelta:(struct CGPoint { float x1; float x2; })arg1;
- (void)removeLastNode;
- (void)removeNode:(id)arg1;
- (void)removeTemporaryNodes;
- (void)reverseDirection;
- (void)selectAllNodes;
- (void)setClosed:(BOOL)arg1;
- (void)setNodes:(id)arg1;
- (void)sharpenAllNodes;
- (void)smoothAllNodes;
- (void)smoothNode:(id)arg1;
- (id)splitEdgeAtIndex:(unsigned int)arg1 atPercentage:(float)arg2;
- (void)transformUsingAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)updateReflectedState;
- (void)updateSmoothNodes;
- (void)updateSmoothNodes:(id)arg1 addTemporaryNodes:(BOOL)arg2;
- (int)updateSmoothNodes:(id)arg1 from:(int)arg2 to:(int)arg3 closed:(BOOL)arg4 addTemporaryNodes:(BOOL)arg5;

@end