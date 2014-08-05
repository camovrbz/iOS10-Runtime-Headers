/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class IKTextElement, IKOrdinalElement, IKImageElement, IKViewElement;

@interface IKLockupElement : IKViewElement  {
}

@property(retain,readonly) IKImageElement * image;
@property(retain,readonly) IKImageElement * fullscreenImage;
@property(retain,readonly) IKTextElement * title;
@property(retain,readonly) IKTextElement * subtitle;
@property(retain,readonly) IKTextElement * descriptionText;
@property(retain,readonly) IKOrdinalElement * ordinal;
@property(readonly) bool showTitlesOnFocus;
@property(retain,readonly) IKViewElement * overlays;


- (bool)showTitlesOnFocus;
- (id)ordinal;
- (id)fullscreenImage;
- (id)descriptionText;
- (id)overlays;
- (id)title;
- (id)image;
- (id)subtitle;

@end