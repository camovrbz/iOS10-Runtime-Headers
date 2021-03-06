/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFMediaDetail : NSObject <NSSecureCoding> {
    SFText * _content;
    NSString * _title;
}

@property (nonatomic, retain) SFText *content;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)content;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
