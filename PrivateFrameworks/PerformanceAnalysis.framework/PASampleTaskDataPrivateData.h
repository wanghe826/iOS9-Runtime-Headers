/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASampleTaskDataPrivateData : NSObject <PASerializable> {
    int  _cow_faults;
    int  _faults;
    unsigned int  _latency_qos;
    int  _pageins;
    unsigned int  _ss_flags;
    int  _suspend_count;
    int  _task_size;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) BOOL isBoosted;
@property (readonly) BOOL isDarwinBG;
@property (readonly) BOOL isDarwinExtBG;
@property (readonly) BOOL isForeground;
@property (readonly) BOOL isFrozen;
@property (readonly) BOOL isNonVisible;
@property (readonly) BOOL isPidSuspended;
@property (readonly) BOOL isSuppressed;
@property (readonly) BOOL isTaskResourceFlagged;
@property (readonly) BOOL isTerminatedSnapshot;
@property (readonly) BOOL isTimerThrottled;
@property (readonly) BOOL isVisible;
@property (readonly) unsigned int latencyQos;
@property (readonly) int numberOfCopyOnWritePageFaults;
@property (readonly) int numberOfPageFaults;
@property (readonly) int numberOfPageIns;
@property (readonly) unsigned int ss_flags;
@property (readonly) Class superclass;
@property (readonly) int suspendCount;
@property (readonly) int taskSizeInPages;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)correspondsToTaskSnapshot:(const struct task_snapshot { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned char x6[16]; unsigned long long x7; unsigned int x8; int x9; int x10; int x11; int x12; int x13; unsigned int x14; unsigned long long x15; unsigned long long x16; BOOL x17[17]; unsigned int x18; unsigned int x19; unsigned int x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25[4]; unsigned long long x26[4]; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned int x35; }*)arg1;
- (id)initWithTaskSnapshot:(const struct task_snapshot { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned char x6[16]; unsigned long long x7; unsigned int x8; int x9; int x10; int x11; int x12; int x13; unsigned int x14; unsigned long long x15; unsigned long long x16; BOOL x17[17]; unsigned int x18; unsigned int x19; unsigned int x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25[4]; unsigned long long x26[4]; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned int x35; }*)arg1;
- (BOOL)isBoosted;
- (BOOL)isDarwinBG;
- (BOOL)isDarwinExtBG;
- (BOOL)isForeground;
- (BOOL)isFrozen;
- (BOOL)isNonVisible;
- (BOOL)isPidSuspended;
- (BOOL)isSuppressed;
- (BOOL)isTaskResourceFlagged;
- (BOOL)isTerminatedSnapshot;
- (BOOL)isTimerThrottled;
- (BOOL)isVisible;
- (unsigned int)latencyQos;
- (int)numberOfCopyOnWritePageFaults;
- (int)numberOfPageFaults;
- (int)numberOfPageIns;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long)sizeInBytesForSerializedVersion;
- (unsigned int)ss_flags;
- (int)suspendCount;
- (int)taskSizeInPages;

@end
