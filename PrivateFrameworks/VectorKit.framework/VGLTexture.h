/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLResource;

@interface VGLTexture : NSObject  {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _contentRect;
    struct CGSize { 
        float width; 
        float height; 
    } _textureSize;
    BOOL _dirty;
    BOOL _isLoaded;
    BOOL _hasMipmap;
    BOOL _anisotropicFiltering;
    int _target;
    int _wrapBehaviorX;
    int _wrapBehaviorY;
    int _minFilter;
    int _magFilter;
    VGLResource *_textureResource;
}

@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentRect;
@property(readonly) struct CGSize { float x1; float x2; } textureSize;
@property(getter=isFlipped,readonly) BOOL flipped;
@property(readonly) BOOL isLoaded;
@property(readonly) BOOL dirty;
@property BOOL anisotropicFiltering;
@property BOOL hasMipmap;
@property int target;
@property int wrapBehavior;
@property int wrapBehaviorX;
@property int wrapBehaviorY;
@property int minificationFilter;
@property int magnificationFilter;

+ (id)textureWithName:(id)arg1 forScale:(float)arg2;
+ (void)purge;

- (int)wrapBehaviorY;
- (int)wrapBehaviorX;
- (void)setHasMipmap:(BOOL)arg1;
- (BOOL)hasMipmap;
- (void)setAnisotropicFiltering:(BOOL)arg1;
- (BOOL)anisotropicFiltering;
- (BOOL)dirty;
- (struct CGSize { float x1; float x2; })textureSize;
- (int)wrapBehavior;
- (void)useTextureWithContext:(id)arg1;
- (id)initWithData:(id)arg1 loadImmediately:(BOOL)arg2;
- (void)setWrapBehaviorY:(int)arg1;
- (void)setWrapBehaviorX:(int)arg1;
- (BOOL)loadTexture;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 requirePowerOf2:(BOOL)arg2;
- (void)setWrapBehavior:(int)arg1;
- (BOOL)decodeTexture;
- (void)setMagnificationFilter:(int)arg1;
- (void)setMinificationFilter:(int)arg1;
- (BOOL)isFlipped;
- (int)minificationFilter;
- (int)magnificationFilter;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1;
- (unsigned int)token;
- (id)init;
- (id)initWithName:(id)arg1;
- (void)setTarget:(int)arg1;
- (void)dealloc;
- (id).cxx_construct;
- (id)description;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRect;
- (int)target;
- (id)initWithData:(id)arg1;
- (BOOL)isLoaded;

@end