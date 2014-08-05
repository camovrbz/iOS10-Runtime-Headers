/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>;

@interface BSSerializedRequestQueue : NSObject  {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_workQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _conditionBlock;

}

@property(retain,readonly) NSObject<OS_dispatch_queue> * serialQueue;


- (void)enqueueRequest:(id)arg1;
- (id)serialQueue;
- (void)enqueueAsyncRequest:(id)arg1;
- (id)initWithSerialQueue:(id)arg1 workQueue:(id)arg2 executionCondition:(id)arg3;
- (void)_enqueueSerialConditionalRequest:(id)arg1;
- (void)dealloc;

@end