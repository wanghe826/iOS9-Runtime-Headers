/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, NSArray;

@interface PSIAsset : NSObject <NSCopying> {
    NSString *_uuid;
    NSArray *_contentStrings;
    struct __CFArray { } *_categories;
    struct __CFArray { } *_owningCategories;
}

@property(setter=setUUID:,copy) NSString * uuid;
@property(readonly) NSArray * contentStrings;
@property(readonly) struct __CFArray { }* categories;
@property(readonly) struct __CFArray { }* owningCategories;


- (struct __CFArray { }*)owningCategories;
- (id)contentStrings;
- (void)addContentString:(id)arg1 category:(short)arg2 owningCategory:(short)arg3;
- (void)setUUID:(id)arg1;
- (void)sort;
- (id)uuid;
- (void)clear;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __CFArray { }*)categories;

@end