/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServer : NSObject {
    NSArray * _accessories;
    NSNumber * _category;
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HAPAccessoryServerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    BOOL  _hasPairings;
    NSString * _homeName;
    NSString * _identifier;
    NSObject<OS_dispatch_queue> * _internalDelegateQueue;
    NSHashTable * _internalDelegates;
    <HAPKeyStore> * _keyStore;
    NSString * _name;
    NSString * _pairSetupPassword;
    BOOL  _paired;
    HAPAccessory * _primaryAccessory;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    BOOL  _reachable;
}

@property (nonatomic, copy) NSArray *accessories;
@property (nonatomic, copy) NSNumber *category;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) <HAPAccessoryServerDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) BOOL hasPairings;
@property (nonatomic, copy) NSString *homeName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalDelegateQueue;
@property (nonatomic, readonly) NSHashTable *internalDelegates;
@property (nonatomic, readonly) <HAPKeyStore> *keyStore;
@property (nonatomic, readonly) int linkType;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *pairSetupPassword;
@property (getter=isPaired, nonatomic, readonly) BOOL paired;
@property (nonatomic, retain) HAPAccessory *primaryAccessory;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (getter=isReachable, nonatomic) BOOL reachable;

+ (BOOL)isAccessoryServerWithIdentifierPaired:(id)arg1 keyStore:(id)arg2;

- (void).cxx_destruct;
- (id)_serverIdentifier;
- (id)_serverName;
- (id)accessories;
- (void)addInternalDelegate:(id)arg1;
- (BOOL)addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (id)category;
- (id)clientQueue;
- (void)continuePairingAfterAuthPrompt;
- (id)delegate;
- (id)delegateQueue;
- (void)discoverAccessories;
- (void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(id /* block */)arg3 queue:(id)arg4;
- (void)enumerateInternalDelegatesUsingBlock:(id /* block */)arg1;
- (id)getName;
- (void)handleUpdatesForCharacteristics:(id)arg1;
- (BOOL)hasPairings;
- (id)homeName;
- (id)identifier;
- (void)identifyWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithKeystore:(id)arg1;
- (id)internalDelegateQueue;
- (id)internalDelegates;
- (BOOL)isPaired;
- (BOOL)isReachable;
- (id)keyStore;
- (int)linkType;
- (id)name;
- (void)notifyDelegateUpdatedHasPairings:(BOOL)arg1;
- (id)pairSetupPassword;
- (id)primaryAccessory;
- (id)propertyQueue;
- (void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeInternalDelegate:(id)arg1;
- (BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)setAccessories:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setHasPairings:(BOOL)arg1;
- (void)setHomeName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPairSetupPassword:(id)arg1;
- (void)setPrimaryAccessory:(id)arg1;
- (void)setReachable:(BOOL)arg1;
- (void)startPairing;
- (BOOL)stopPairingWithError:(id*)arg1;
- (BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2;
- (void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;

@end
