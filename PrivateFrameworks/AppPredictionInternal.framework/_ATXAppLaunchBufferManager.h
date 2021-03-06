/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchBufferManager : NSObject {
    NSMapTable * _buffers;
    unsigned int  _capacity;
    NSHashTable * _inMemoryBuffers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned int)inMemoryBufferCount;
- (id)inMemoryLaunchBuffer;
- (id)init;
- (id)launchBufferForTable:(int)arg1;
- (unsigned int)persistentBufferCount;
- (void)resetBuffersToCapacity:(unsigned int)arg1;

@end
