/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUDateFormatter_NSFormatter : NSFormatter {
    BOOL  isDateOnly;
    BOOL  isTimeOnly;
    TSULocale * locale;
    NSString * mPreferredFormat;
}

@property (nonatomic) BOOL isDateOnly;
@property (nonatomic) BOOL isTimeOnly;
@property (nonatomic, retain) TSULocale *locale;
@property (nonatomic, retain) NSString *preferredFormat;

- (void)dealloc;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)init;
- (BOOL)isDateOnly;
- (BOOL)isTimeOnly;
- (id)locale;
- (id)preferredFormat;
- (void)setIsDateOnly:(BOOL)arg1;
- (void)setIsTimeOnly:(BOOL)arg1;
- (void)setLocale:(id)arg1;
- (void)setPreferredFormat:(id)arg1;
- (id)stringForObjectValue:(id)arg1;

@end
