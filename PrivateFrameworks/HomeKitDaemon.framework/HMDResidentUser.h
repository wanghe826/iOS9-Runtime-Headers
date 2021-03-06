/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDResidentUser : HMDUser {
    BOOL  _primaryResidentDevice;
    unsigned int  _residentConfigState;
    NSString * _residentIdentifier;
    NSString * _residentName;
}

@property (getter=isPrimaryResidentDevice, nonatomic, readonly) BOOL primaryResidentDevice;
@property (nonatomic) unsigned int residentConfigState;
@property (nonatomic, retain) NSString *residentIdentifier;
@property (nonatomic, retain) NSString *residentName;

+ (id)residentUserWithUser:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserID:(id)arg1 residentName:(id)arg2 residentIdentifier:(id)arg3;
- (id)initWithWithUser:(id)arg1;
- (BOOL)isPrimaryResidentDevice;
- (BOOL)mergeFromUser:(id)arg1;
- (unsigned int)residentConfigState;
- (id)residentIdentifier;
- (id)residentName;
- (void)setResidentConfigState:(unsigned int)arg1;
- (void)setResidentIdentifier:(id)arg1;
- (void)setResidentName:(id)arg1;
- (id)xpcDisplayName;

@end
