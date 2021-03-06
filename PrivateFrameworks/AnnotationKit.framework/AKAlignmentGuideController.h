/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKAlignmentGuideController : NSObject {
    BOOL  _exifHasFlippedAxes;
    struct CGPoint { 
        float x; 
        float y; 
    }  _initialDraggedAnnotationsCombinedCenter;
    struct CGPoint { float x1; float x2; } * _otherAnnotationCenters;
    unsigned int  _otherAnnotationCentersCount;
    AKPageController * _pageController;
    float  _screenToModelScaleFactor;
}

@property BOOL exifHasFlippedAxes;
@property AKPageController *pageController;
@property float screenToModelScaleFactor;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)exifHasFlippedAxes;
- (struct CGPoint { float x1; float x2; })guideAlignedPointForPoint:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2 orRecognizer:(id)arg3;
- (id)initWithPageController:(id)arg1;
- (id)pageController;
- (float)screenToModelScaleFactor;
- (void)setExifHasFlippedAxes:(BOOL)arg1;
- (void)setPageController:(id)arg1;
- (void)setScreenToModelScaleFactor:(float)arg1;

@end
