/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLMasterChange : CPLItemChange {
    NSDate * _creationDate;
    NSString * _filename;
    unsigned int  _fullSizeJPEGSource;
    NSDate * _importDate;
    NSString * _importGroupIdentifier;
    NSString * _itemType;
    NSData * _mediaMetaData;
    NSString * _mediaMetaDataType;
    int  _originalOrientation;
    NSArray * _resources;
}

@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSString *filename;
@property (nonatomic) unsigned int fullSizeJPEGSource;
@property (nonatomic, copy) NSDate *importDate;
@property (nonatomic, copy) NSString *importGroupIdentifier;
@property (nonatomic, readonly) BOOL isImage;
@property (nonatomic, readonly) BOOL isVideo;
@property (nonatomic, copy) NSString *itemType;
@property (nonatomic, retain) NSData *mediaMetaData;
@property (nonatomic, copy) NSString *mediaMetaDataType;
@property (nonatomic) int originalOrientation;
@property (nonatomic, copy) NSArray *resources;

- (void).cxx_destruct;
- (void)awakeFromStorage;
- (id /* block */)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (id)creationDate;
- (unsigned int)dataClassType;
- (int)dequeueOrder;
- (id)filename;
- (unsigned int)fullSizeJPEGSource;
- (id)importDate;
- (id)importGroupIdentifier;
- (id)init;
- (BOOL)isImage;
- (BOOL)isVideo;
- (id)itemType;
- (id)mediaMetaData;
- (id)mediaMetaDataType;
- (id)name;
- (int)originalOrientation;
- (void)prepareForStorage;
- (id)propertiesDescription;
- (id)propertiesForChangeType:(unsigned int)arg1;
- (id)resources;
- (void)setCreationDate:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setFullSizeJPEGSource:(unsigned int)arg1;
- (void)setImportDate:(id)arg1;
- (void)setImportGroupIdentifier:(id)arg1;
- (void)setItemType:(id)arg1;
- (void)setMediaMetaData:(id)arg1;
- (void)setMediaMetaDataType:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOriginalOrientation:(int)arg1;
- (void)setResources:(id)arg1;
- (BOOL)supportsResources;

@end
