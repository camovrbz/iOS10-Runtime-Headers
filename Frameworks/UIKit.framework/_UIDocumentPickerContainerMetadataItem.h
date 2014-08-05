/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSArray, NSURL;

@interface _UIDocumentPickerContainerMetadataItem : _UIDocumentPickerContainerItem  {
    long long _cachedType;
    NSString *_cachedTitle;
    NSString *_cachedSubtitle;
    NSArray *_cachedTags;
    NSURL *_cachedURL;
}


- (id)url;
- (id)title;
- (id)tags;
- (long long)type;
- (void)dealloc;
- (void)_removeCachedValues;
- (void)cacheValues;
- (id)sortDate;
- (id)subtitle;
- (id)initWithItem:(id)arg1;

@end