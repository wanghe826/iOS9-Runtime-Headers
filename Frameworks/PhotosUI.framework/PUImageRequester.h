/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImageRequester : NSObject {
    int  __currentFullsizeJPEGRequestID;
    int  __currentImageRequestID;
    BOOL  __hasCurrentIncompleteRequest;
    BOOL  __hasRequestedFullsizeImageData;
    BOOL  __isPerformingChanges;
    struct CGSize { 
        float width; 
        float height; 
    }  __lastRequestedImageSize;
    NSHashTable * __observers;
    BOOL  __shouldUpdateImageOnCurrentRequestCompletion;
    <PUDisplayAsset> * _asset;
    NSData * _fullsizeImageData;
    UIImage * _image;
    BOOL  _imageIsFullQuality;
    BOOL  _imageIsPlaceholder;
    PUMediaProvider * _mediaProvider;
    BOOL  _networkAccessAllowed;
    struct CGSize { 
        float width; 
        float height; 
    }  _targetSize;
    BOOL  _useFullsizeImageData;
}

@property (setter=_setCurrentFullsizeJPEGRequestID:, nonatomic) int _currentFullsizeJPEGRequestID;
@property (setter=_setCurrentImageRequestID:, nonatomic) int _currentImageRequestID;
@property (setter=_setCurrentIncompleteRequest:, nonatomic) BOOL _hasCurrentIncompleteRequest;
@property (setter=_setHasRequestedFullsizeJPEG:, nonatomic) BOOL _hasRequestedFullsizeImageData;
@property (setter=_setPerformingChanges:, nonatomic) BOOL _isPerformingChanges;
@property (setter=_setLastRequestedImageSize:, nonatomic) struct CGSize { float x1; float x2; } _lastRequestedImageSize;
@property (setter=_setObserver:, nonatomic, retain) NSHashTable *_observers;
@property (setter=_setShouldUpdateImageOnCurrentRequestCompletion:, nonatomic) BOOL _shouldUpdateImageOnCurrentRequestCompletion;
@property (nonatomic, readonly) <PUDisplayAsset> *asset;
@property (nonatomic, retain) NSData *fullsizeImageData;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) BOOL imageIsFullQuality;
@property (setter=_setImageIsPlaceholder:, nonatomic) BOOL imageIsPlaceholder;
@property (nonatomic, readonly) PUMediaProvider *mediaProvider;
@property (getter=isNetworkAccessAllowed, nonatomic) BOOL networkAccessAllowed;
@property (nonatomic) struct CGSize { float x1; float x2; } targetSize;
@property (nonatomic) BOOL useFullsizeImageData;

- (void).cxx_destruct;
- (int)_currentFullsizeJPEGRequestID;
- (int)_currentImageRequestID;
- (void)_didChange:(id)arg1;
- (void)_handleResultOfFullsizeJPEGDataRequestWithID:(int)arg1 imageData:(id)arg2 dataUTI:(id)arg3 orientation:(int)arg4 info:(id)arg5;
- (void)_handleResultOfImageRequestWithID:(int)arg1 image:(id)arg2 info:(id)arg3;
- (BOOL)_hasCurrentIncompleteRequest;
- (BOOL)_hasRequestedFullsizeImageData;
- (BOOL)_isPerformingChanges;
- (struct CGSize { float x1; float x2; })_lastRequestedImageSize;
- (id)_observers;
- (void)_setCurrentFullsizeJPEGRequestID:(int)arg1;
- (void)_setCurrentImageRequestID:(int)arg1;
- (void)_setCurrentIncompleteRequest:(BOOL)arg1;
- (void)_setFullsizeImageData:(id)arg1;
- (void)_setHasRequestedFullsizeJPEG:(BOOL)arg1;
- (void)_setImage:(id)arg1;
- (void)_setImageIsFullQuality:(BOOL)arg1;
- (void)_setImageIsPlaceholder:(BOOL)arg1;
- (void)_setLastRequestedImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setObserver:(id)arg1;
- (void)_setPerformingChanges:(BOOL)arg1;
- (void)_setShouldUpdateImageOnCurrentRequestCompletion:(BOOL)arg1;
- (BOOL)_shouldUpdateImageOnCurrentRequestCompletion;
- (void)_update;
- (id)asset;
- (void)cancelAllImageRequests;
- (id)fullsizeImageData;
- (id)image;
- (BOOL)imageIsFullQuality;
- (BOOL)imageIsPlaceholder;
- (id)init;
- (id)initWithMediaProvider:(id)arg1 asset:(id)arg2;
- (BOOL)isNetworkAccessAllowed;
- (id)mediaProvider;
- (void)performChanges:(id /* block */)arg1;
- (void)registerObserver:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setNetworkAccessAllowed:(BOOL)arg1;
- (void)setTargetSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setUseFullsizeImageData:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })targetSize;
- (void)unregisterObserver:(id)arg1;
- (BOOL)useFullsizeImageData;

@end
