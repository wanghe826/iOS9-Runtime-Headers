/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
 */

@interface _UIKeyboardArbiterHandle : NSObject <_UIKeyboardArbitration> {
    BOOL  _active;
    NSString * _bundleIdentifier;
    NSXPCConnection * _connection;
    NSMutableSet * _hostedPids;
    BOOL  _invalidated;
    float  _level;
    _UIKeyboardArbiter * _owner;
    BKSProcessAssertion * _remoteKeepAliveAssertion;
    unsigned int  _remoteKeepAliveAssertionCount;
    unsigned int  _remoteKeepAliveTimerCount;
    NSString * _remoteSceneID;
    BOOL  _running;
    FBSCAContextSceneLayer * _sceneLayer;
    int  _suppressionCount;
    BOOL  _wantedActive;
}

@property (readonly) BOOL active;
@property (readonly, retain) NSString *bundleIdentifier;
@property (readonly) NSXPCConnection *connection;
@property (readonly) float level;
@property (readonly) int processIdentifier;
@property (readonly, retain) NSString *remoteSceneID;
@property BOOL running;
@property (readonly, retain) FBSCAContextSceneLayer *sceneLayer;
@property (readonly) BOOL wantedActive;

+ (id)handlerWithArbiter:(id)arg1 forConnection:(id)arg2;

- (void).cxx_destruct;
- (void)_deactivateScene;
- (BOOL)active;
- (void)applicationShouldFocus;
- (id)bundleIdentifier;
- (id)connection;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (BOOL)isHandlerShowableWithHandler:(id)arg1;
- (float)level;
- (void)notifyHostedPIDsOfSuppression:(BOOL)arg1;
- (int)processIdentifier;
- (void)releaseProcessAssertion;
- (id)remoteSceneID;
- (void)retrieveDebugInformation:(id /* block */)arg1;
- (BOOL)running;
- (id)sceneLayer;
- (void)setDebugLevel:(int)arg1;
- (void)setRunning:(BOOL)arg1;
- (void)setWindowContextID:(unsigned int)arg1 sceneIdentifier:(id)arg2 forKeyboard:(BOOL)arg3 withLevel:(float)arg4;
- (void)setWindowHostingPID:(int)arg1 active:(BOOL)arg2;
- (void)signalKeyboardChangeComplete;
- (void)signalKeyboardChanged:(id)arg1 onCompletion:(id /* block */)arg2;
- (void)startArbitrationWithExpectedState:(id)arg1 hostingPIDs:(id)arg2 withSuppression:(int)arg3 onConnected:(id /* block */)arg4;
- (void)takeProcessAssertionOnRemoteWithQueue:(id)arg1;
- (void)transition:(id)arg1 eventStage:(unsigned int)arg2 withInfo:(id)arg3;
- (BOOL)wantedActive;

@end
