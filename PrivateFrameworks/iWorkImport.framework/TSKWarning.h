/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKWarning : NSObject {
    NSSet * _affectedObjects;
    NSString * _localizedLocation;
    NSString * _message;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) NSSet *affectedObjects;
@property (nonatomic, copy) NSString *localizedLocation;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (id)warningWithMessage:(id)arg1;
+ (id)warningWithMessage:(id)arg1 affectedObject:(id)arg2;
+ (id)warningWithMessage:(id)arg1 affectedObjects:(id)arg2;

- (id)affectedObjects;
- (void)dealloc;
- (unsigned int)hash;
- (id)initWithMessage:(id)arg1 affectedObjects:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)localizedLocation;
- (id)message;
- (void)setAffectedObjects:(id)arg1;
- (void)setLocalizedLocation:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end