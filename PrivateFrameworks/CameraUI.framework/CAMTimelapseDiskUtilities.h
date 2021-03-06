/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTimelapseDiskUtilities : NSObject

+ (id)directoryPathForTimelapseUUID:(id)arg1;
+ (id)dummyFileName;
+ (id)dummyFilePathForTimelapseUUID:(id)arg1;
+ (id)fileNameForImageFrameIndex:(int)arg1;
+ (int)frameIndexFromImageFileName:(id)arg1;
+ (BOOL)hasPendingWork;
+ (id)readFrameFilePathsForTimelapseUUID:(id)arg1;
+ (id)readSecondaryStateForTimelapseUUID:(id)arg1;
+ (id)readSortedStatesFromDiskMergeSecondaryState:(BOOL)arg1;
+ (id)readStateForTimelapseUUID:(id)arg1 mergeSecondaryState:(BOOL)arg2;
+ (BOOL)removeDummyFileForTimelapseUUID:(id)arg1;
+ (BOOL)reserveDummyFileForTimelapseUUID:(id)arg1 width:(int)arg2 height:(int)arg3;
+ (id)secondaryStateFileName;
+ (id)secondaryStateFilePathForTimelapseUUID:(id)arg1;
+ (id)sortedArrayFromFilePathDictionary:(id)arg1 reverse:(BOOL)arg2;
+ (id)stateFileName;
+ (id)stateFilePathForTimelapseUUID:(id)arg1;
+ (id)timelapseDirectoryPath;
+ (id)timelapseDirectoryPathCreateIfNeeded:(BOOL)arg1;
+ (id)timelapseUUIDsOnDisk;
+ (id)updateSecondaryStateForMovieWriteAttemptForTimelapseUUID:(id)arg1;
+ (id)updateSecondaryStateForTimelapseUUID:(id)arg1 forStateReadSuccessfully:(BOOL)arg2;
+ (id)updateSecondaryStateForTimelapseUUID:(id)arg1 withStopReasons:(int)arg2 stopTime:(id)arg3;
+ (BOOL)writeSecondaryStateToDisk:(id)arg1 forTimelapseUUID:(id)arg2;
+ (BOOL)writeStateToDisk:(id)arg1 createDirectoryIfNeeded:(BOOL)arg2;

@end
