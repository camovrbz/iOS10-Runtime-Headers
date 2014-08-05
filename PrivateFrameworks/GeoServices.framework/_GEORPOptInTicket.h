/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, GEORPProblemOptInRequest, GEOMapServiceTraits;

@interface _GEORPOptInTicket : NSObject <GEOMapServiceFixNotificationTicket> {
    GEORPProblemOptInRequest *_request;
    GEOMapServiceTraits *_traits;
    bool_canceled;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) GEOMapServiceTraits * traits;


- (id)initWithSubmissionID:(id)arg1 allowNotificationsAtPushToken:(id)arg2 allowContactBackAtEmailAddress:(id)arg3 traits:(id)arg4;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;
- (id)traits;
- (void)cancel;
- (void)dealloc;

@end