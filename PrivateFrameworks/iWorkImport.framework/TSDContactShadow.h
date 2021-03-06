/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDContactShadow : TSDShadow {
    float  mHeight;
}

@property (nonatomic, readonly) float height;
@property (nonatomic, readonly) float perspective;

+ (id)contactShadowWithOffset:(float)arg1 height:(float)arg2 radius:(float)arg3 opacity:(float)arg4 color:(struct CGColor { }*)arg5 enabled:(BOOL)arg6;
+ (id)instanceWithArchive:(const struct ShadowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; float x6; float x7; int x8; float x9; bool x10; int x11; struct DropShadowArchive {} *x12; struct ContactShadowArchive {} *x13; struct CurvedShadowArchive {} *x14; }*)arg1 unarchiver:(id)arg2;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForRep:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsInNaturalSpaceForRep:(id)arg1;
- (float)clampOffset:(float)arg1;
- (float)clampRadius:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)height;
- (id)initWithArchive:(const struct ShadowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; float x6; float x7; int x8; float x9; bool x10; int x11; struct DropShadowArchive {} *x12; struct ContactShadowArchive {} *x13; struct CurvedShadowArchive {} *x14; }*)arg1 unarchiver:(id)arg2;
- (id)initWithOffset:(float)arg1 height:(float)arg2 radius:(float)arg3 opacity:(float)arg4 color:(struct CGColor { }*)arg5 enabled:(BOOL)arg6;
- (BOOL)isEqual:(id)arg1;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newShadowClampedForSwatches;
- (struct CGImage { }*)newShadowImageForRep:(id)arg1 withSize:(struct CGSize { float x1; float x2; })arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4;
- (struct CGImage { }*)newShadowImageFromContext:(struct CGContext { }*)arg1 withSize:(struct CGSize { float x1; float x2; })arg2 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 unflipped:(BOOL)arg4;
- (float)perspective;
- (void)saveToArchive:(struct ShadowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; float x6; float x7; int x8; float x9; bool x10; int x11; struct DropShadowArchive {} *x12; struct ContactShadowArchive {} *x13; struct CurvedShadowArchive {} *x14; }*)arg1 archiver:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })shadowBoundsForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 additionalTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (unsigned int)shadowType;

@end
