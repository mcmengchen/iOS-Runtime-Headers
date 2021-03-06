/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSPrivacyInfoCenter : NSObject {
    unsigned int  _privacyAccessStatus;
    VSPrivacyFacade * _privacyFacade;
    int  _registrationToken;
}

@property (nonatomic, readonly) int accountAccessStatus;
@property (nonatomic) unsigned int privacyAccessStatus;
@property (nonatomic, retain) VSPrivacyFacade *privacyFacade;
@property (nonatomic) int registrationToken;

+ (id)sharedPrivacyInfoCenter;

- (void).cxx_destruct;
- (void)_invalidateAccountAccessStatus;
- (int)accountAccessStatus;
- (void)dealloc;
- (id)init;
- (unsigned int)privacyAccessStatus;
- (id)privacyFacade;
- (int)registrationToken;
- (void)setPrivacyAccessStatus:(unsigned int)arg1;
- (void)setPrivacyFacade:(id)arg1;
- (void)setRegistrationToken:(int)arg1;
- (id)updateAccountAccessStatusWithError:(id)arg1;
- (void)updateAccountAccessStatusWithResponse:(id)arg1;

@end
