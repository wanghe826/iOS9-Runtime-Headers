/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLShieldProgram : VGLProgram  {
    int _uTextureSampler;
    int _textureSampler;
    int _uFadeTime;
    float _fadeTime;
    int _uParallaxNormal;
    struct Vec2Imp<float> { 
        float x; 
        float y; 
    } _parallaxNormal;
}

@property int textureSampler;
@property float fadeTime;
@property struct Vec2Imp<float> { float x1; float x2; } parallaxNormal;

+ (id)fragName;
+ (id)vertName;

- (struct Vec2Imp<float> { float x1; float x2; })parallaxNormal;
- (void)setParallaxNormal:(struct Vec2Imp<float> { float x1; float x2; })arg1;
- (float)fadeTime;
- (void)setFadeTime:(float)arg1;
- (int)textureSampler;
- (void)setTextureSampler:(int)arg1;
- (void)setup;
- (id).cxx_construct;

@end