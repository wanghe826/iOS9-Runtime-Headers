/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class VKImage;

@interface MKGemImageManager : NSObject  {
    float _scale;
    VKImage *_normalImage;
    VKImage *_staleImage;
}

+ (id)sharedManagerWithScale:(float)arg1;

- (id)staleImage;
- (id)normalImage;
- (id)_newImageNamed:(id)arg1;
- (id)initWithScale:(float)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(id)arg1;

@end