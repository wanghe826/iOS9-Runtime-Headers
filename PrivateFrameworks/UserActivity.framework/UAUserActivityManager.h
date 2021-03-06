/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

@interface UAUserActivityManager : NSObject <UAUserActivityClientResponseProtocol> {
    NSMapTable * _activeUserActivitiesByUUID;
    NSUUID * _activeUserActivityUUID;
    BOOL  _activityContinuationIsEnabled;
    NSXPCConnection * _connection;
    BOOL  _connectionInitializationSucceeded;
    BOOL  _needToSendInitialMessage;
    NSObject<OS_dispatch_queue> * _serverQ;
    BOOL  _supportsActivityContinuation;
    NSMapTable * _userActivitiesByUUID;
}

@property (retain) NSMapTable *activeUserActivitiesByUUID;
@property (copy) NSUUID *activeUserActivityUUID;
@property (readonly) BOOL activityContinuationIsEnabled;
@property (readonly, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property BOOL needToSendInitialMessage;
@property (readonly) NSObject<OS_dispatch_queue> *serverQ;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsActivityContinuation;
@property (retain) NSMapTable *userActivitiesByUUID;

+ (id)_determineMatchingApplicationBundleIdentfierWithOptionsForActivityType:(id)arg1 dynamicType:(id)arg2 kind:(unsigned int)arg3 teamIdentifier:(id)arg4;
+ (id)defaultManager;
+ (BOOL)shouldSupportActivityContinuation;
+ (BOOL)userActivityContinuationSupported;

- (id)_findUserActivityForUUID:(id)arg1;
- (id)activeActivitiesByPriority;
- (id)activeUserActivitiesByUUID;
- (id)activeUserActivityUUID;
- (id)activities;
- (BOOL)activityContinuationIsEnabled;
- (void)addDynamicUserActivity:(id)arg1 matching:(id)arg2;
- (void)addUserActivity:(id)arg1;
- (void)askClientUserActivityToSave:(id)arg1;
- (void)askClientUserActivityToSave:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)connection;
- (id)createByDecodingUserActivity:(id)arg1;
- (BOOL)currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)didReceiveInputStreamWithUUID:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3;
- (id)encodeUserActivity:(id)arg1;
- (id)fetchUUID:(id)arg1 intervalToWaitForDocumentSynchonization:(double)arg2 withCompletionHandler:(id /* block */)arg3;
- (BOOL)hasUserActivityWithUUID:(id)arg1;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (void)makeActive:(id)arg1;
- (void)makeInactive:(id)arg1;
- (void)markUserActivityAsDirty:(id)arg1 forceImmediate:(BOOL)arg2;
- (BOOL)needToSendInitialMessage;
- (void)pinUserActivity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)removeDynamicUserActivity:(id)arg1 matching:(id)arg2;
- (void)removeUserActivity:(id)arg1;
- (void)sendInitialMessage:(BOOL)arg1;
- (void)sendUserActivityInfoToLSUserActivityd:(id)arg1 makeCurrent:(BOOL)arg2;
- (id)serverQ;
- (void)setActiveUserActivitiesByUUID:(id)arg1;
- (void)setActiveUserActivityUUID:(id)arg1;
- (void)setNeedToSendInitialMessage:(BOOL)arg1;
- (void)setUserActivitiesByUUID:(id)arg1;
- (BOOL)supportsActivityContinuation;
- (void)tellClientDebuggingEnabled:(BOOL)arg1 logFileHandle:(id)arg2;
- (void)tellClientUserActivityItWasResumed:(id)arg1;
- (void)tellDaemonAboutNewLSUserActivity:(id)arg1;
- (id)userActivitiesByUUID;
- (BOOL)userActivityIsActive:(id)arg1;

@end
