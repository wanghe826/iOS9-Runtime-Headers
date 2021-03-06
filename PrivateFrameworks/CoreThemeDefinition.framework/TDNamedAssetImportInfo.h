/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDNamedAssetImportInfo : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _alignmentRect;
    struct CGSize { 
        float width; 
        float height; 
    }  _canvasSize;
    NSArray * _containedImageNames;
    NSURL * _fileURL;
    unsigned int  _graphicsClass;
    int  _graphicsFeatureSetClass;
    int  _idiom;
    NSArray * _layerReferences;
    unsigned int  _memoryClass;
    NSDate * _modificationDate;
    NSString * _name;
    int  _nameIdentifier;
    int  _renditionType;
    struct CGSize { 
        float width; 
        float height; 
    }  _resizableSliceSize;
    int  _resizingMode;
    unsigned int  _scaleFactor;
    int  _sizeClassHorizontal;
    int  _sizeClassVertical;
    struct { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _sliceInsets;
    int  _subtype;
    NSSet * _tags;
    int  _templateRenderingMode;
    NSString * _universalTypeIdentifier;
}

@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } alignmentRect;
@property (nonatomic) struct CGSize { float x1; float x2; } canvasSize;
@property (nonatomic, copy) NSArray *containedImageNames;
@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic) unsigned int graphicsClass;
@property (nonatomic) int graphicsFeatureSetClass;
@property (nonatomic) int idiom;
@property (nonatomic) BOOL isTemplate;
@property (nonatomic, copy) NSArray *layerReferences;
@property (nonatomic) unsigned int memoryClass;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int nameIdentifier;
@property (nonatomic) int renditionType;
@property (nonatomic) struct CGSize { float x1; float x2; } resizableSliceSize;
@property (nonatomic) int resizingMode;
@property (nonatomic) unsigned int scaleFactor;
@property (nonatomic) int sizeClassHorizontal;
@property (nonatomic) int sizeClassVertical;
@property (nonatomic) struct { float x1; float x2; float x3; float x4; } sliceInsets;
@property (nonatomic) int subtype;
@property (nonatomic, copy) NSSet *tags;
@property (nonatomic) int templateRenderingMode;
@property (nonatomic, copy) NSString *universalTypeIdentifier;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentRect;
- (struct CGSize { float x1; float x2; })canvasSize;
- (id)containedImageNames;
- (void)dealloc;
- (id)fileURL;
- (unsigned int)graphicsClass;
- (int)graphicsFeatureSetClass;
- (int)idiom;
- (id)init;
- (BOOL)isTemplate;
- (id)layerReferences;
- (unsigned int)memoryClass;
- (id)modificationDate;
- (id)name;
- (int)nameIdentifier;
- (int)renditionSubtype;
- (int)renditionType;
- (struct CGSize { float x1; float x2; })resizableSliceSize;
- (int)resizingMode;
- (unsigned int)scaleFactor;
- (void)setAlignmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCanvasSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setContainedImageNames:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setGraphicsClass:(unsigned int)arg1;
- (void)setGraphicsFeatureSetClass:(int)arg1;
- (void)setIdiom:(int)arg1;
- (void)setIsTemplate:(BOOL)arg1;
- (void)setLayerReferences:(id)arg1;
- (void)setMemoryClass:(unsigned int)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameIdentifier:(int)arg1;
- (void)setRenditionType:(int)arg1;
- (void)setResizableSliceSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setResizingMode:(int)arg1;
- (void)setScaleFactor:(unsigned int)arg1;
- (void)setSizeClassHorizontal:(int)arg1;
- (void)setSizeClassVertical:(int)arg1;
- (void)setSliceInsets:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setSubtype:(int)arg1;
- (void)setTags:(id)arg1;
- (void)setTemplateRenderingMode:(int)arg1;
- (void)setUniversalTypeIdentifier:(id)arg1;
- (int)sizeClassHorizontal;
- (int)sizeClassVertical;
- (struct { float x1; float x2; float x3; float x4; })sliceInsets;
- (int)subtype;
- (id)tags;
- (int)templateRenderingMode;
- (id)universalTypeIdentifier;

@end
