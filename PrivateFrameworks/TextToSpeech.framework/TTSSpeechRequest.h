/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSSpeechRequest : NSObject <NSSecureCoding> {
    NSAttributedString *_attributedText;
    unsigned int _audioQueueFlags;
    unsigned int _audioSessionID;
    BOOL _audioSessionIDIsValid;
    <TTSSpeechRequestDelegate> *_delegate;
    double _dispatchTime;
    int _footprint;
    int _gender;
    double _handledTime;
    NSString *_languageCode;
    double _latency;
    BOOL _maintainsInput;
    NSURL *_outputPath;
    double _pitch;
    double _rate;
    TTSSpeechChannel *_speechChannel;
    NSString *_text;
    BOOL _useCustomVoice;
    BOOL _useVoiceBooster;
    double _volume;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) unsigned int audioQueueFlags;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) BOOL audioSessionIDIsValid;
@property (nonatomic) double dispatchTime;
@property (nonatomic) int footprint;
@property (nonatomic) int gender;
@property (nonatomic) double handledTime;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic) double latency;
@property (nonatomic) BOOL maintainsInput;
@property (nonatomic, copy) NSURL *outputPath;
@property (nonatomic) double pitch;
@property (nonatomic) double rate;
@property (nonatomic, retain) TTSSpeechChannel *speechChannel;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) BOOL useCustomVoice;
@property (nonatomic) BOOL useVoiceBooster;
@property (nonatomic) double volume;

+ (BOOL)supportsSecureCoding;

- (id)attributedText;
- (unsigned int)audioQueueFlags;
- (unsigned int)audioSessionID;
- (BOOL)audioSessionIDIsValid;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (double)dispatchTime;
- (void)encodeWithCoder:(id)arg1;
- (int)footprint;
- (int)gender;
- (double)handledTime;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpeechChannel:(id)arg1;
- (id)languageCode;
- (double)latency;
- (BOOL)maintainsInput;
- (id)outputPath;
- (double)pitch;
- (double)rate;
- (void)setAttributedText:(id)arg1;
- (void)setAudioQueueFlags:(unsigned int)arg1;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setAudioSessionIDIsValid:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDispatchTime:(double)arg1;
- (void)setFootprint:(int)arg1;
- (void)setGender:(int)arg1;
- (void)setHandledTime:(double)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLatency:(double)arg1;
- (void)setMaintainsInput:(BOOL)arg1;
- (void)setOutputPath:(id)arg1;
- (void)setPitch:(double)arg1;
- (void)setRate:(double)arg1;
- (void)setSpeechChannel:(id)arg1;
- (void)setText:(id)arg1;
- (void)setUseCustomVoice:(BOOL)arg1;
- (void)setUseVoiceBooster:(BOOL)arg1;
- (void)setVolume:(double)arg1;
- (id)speechChannel;
- (void)speechRequestDidContinueForService:(id)arg1;
- (void)speechRequestDidPauseForService:(id)arg1;
- (void)speechRequestDidStartForService:(id)arg1;
- (void)speechRequestDidStopWithSuccess:(BOOL)arg1 phonemesSpoken:(id)arg2 forService:(id)arg3 error:(id)arg4;
- (void)speechRequestMark:(int)arg1 didStartForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 forService:(id)arg3;
- (id)text;
- (BOOL)useCustomVoice;
- (BOOL)useVoiceBooster;
- (long)vocalizerFootprint;
- (long)vocalizerGender;
- (double)volume;

@end