/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, SAClockObject;

@interface SAClockAdd : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;
@property(retain) SAClockObject * clockToAdd;

+ (id)addWithDictionary:(id)arg1 context:(id)arg2;
+ (id)add;

- (void)setClockToAdd:(id)arg1;
- (id)clockToAdd;
- (BOOL)requiresResponse;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end