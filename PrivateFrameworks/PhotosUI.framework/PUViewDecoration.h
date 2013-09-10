/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class UIColor, UIImage;

@interface PUViewDecoration : NSObject <NSCopying> {
    UIColor *_shadowColor;
    float _shadowRadius;
    UIColor *_borderColor;
    float _borderWidth;
    UIColor *_edgeColor;
    struct CGSize { 
        float width; 
        float height; 
    } _shadowOffset;
}

@property(retain) UIColor * shadowColor;
@property float shadowRadius;
@property struct CGSize { float x1; float x2; } shadowOffset;
@property(retain) UIColor * borderColor;
@property float borderWidth;
@property(retain) UIColor * edgeColor;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } overlayInsets;
@property(readonly) UIImage * overlayImage;


- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })overlayInsets;
- (id)decorationVariantsWithDecreasingBrightness:(int)arg1;
- (BOOL)_displayEdges;
- (BOOL)_displayBorder;
- (BOOL)_displayShadow;
- (void)setEdgeColor:(id)arg1;
- (id)edgeColor;
- (id)overlayImage;
- (void)setShadowRadius:(float)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setBorderWidth:(float)arg1;
- (void)setBorderColor:(id)arg1;
- (id)borderColor;
- (float)borderWidth;
- (id)shadowColor;
- (float)shadowRadius;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end