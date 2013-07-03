/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class SKPaymentQueueClient, NSArray;

@interface SKPaymentQueue : NSObject  {
    id _internal;
}

@property(readonly) NSArray * transactions;
@property(readonly) SKPaymentQueueClient * paymentQueueClient;

+ (BOOL)canMakePayments;
+ (id)defaultQueue;

- (void)cancelDownloads:(id)arg1;
- (void)_daemonLaunchedNotification;
- (id)paymentQueueClient;
- (id)initWithPaymentQueueClient:(id)arg1;
- (id)transactions;
- (void)startDownloads:(id)arg1;
- (void)resumeDownloads:(id)arg1;
- (void)restoreCompletedTransactions;
- (void)removeTransactionObserver:(id)arg1;
- (void)pauseDownloads:(id)arg1;
- (void)finishTransaction:(id)arg1;
- (void)addTransactionObserver:(id)arg1;
- (void)addPayment:(id)arg1;
- (void)_notifyObserversAboutDownloadChanges:(id)arg1;
- (id)_applyDownloadChangeset:(id)arg1;
- (id)_copyTransactionsFromXPCArray:(id)arg1;
- (void)_processUpdates:(id)arg1 trimUnmatched:(BOOL)arg2 sendUpdatedDownloads:(BOOL)arg3;
- (id)_copyDownloadIDsForDownloads:(id)arg1;
- (void)_finishRefreshPayments;
- (id)_copyRemovalsFromUnmergedIndexSet:(id)arg1;
- (void)_completeRestoreWithMessage:(id)arg1;
- (void)_removePaymentsForMessage:(id)arg1;
- (void)_updatePaymentsForMessage:(id)arg1;
- (void)_updateDownloadsForMessage:(id)arg1;
- (void)_notifyObserversAboutRemovals:(id)arg1;
- (void)_setTransactionsWithReply:(id)arg1;
- (void)_handleMessage:(id)arg1 connection:(id)arg2;
- (void)_handleConnectionDisconnect;
- (void)_notifyObserversRestoreTransactionsFailedWithError:(id)arg1;
- (void)_notifyObserversRestoreTransactionsFinished;
- (void)_refreshPaymentsWithPolicy:(int)arg1;
- (void)restoreCompletedTransactionsWithApplicationUsername:(id)arg1;
- (void)_removeLocalTransaction:(id)arg1;
- (void)_sendCommand:(long long)arg1 forDownloads:(id)arg2;
- (void)_establishConnectionIfNeeded;
- (void)_notifyObserversAboutChanges:(id)arg1 sendUpdatedDownloads:(BOOL)arg2;
- (id)_initSKPaymentQueue;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)_establishConnection;

@end