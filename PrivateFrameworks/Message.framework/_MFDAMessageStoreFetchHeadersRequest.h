/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDAMessageStoreFetchHeadersRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest> {
    <MFRequestQueueResponseConsumer> * consumer;
    MFMessage * message;
    MFDAMessageStore * store;
}

@property (nonatomic, readonly) BOOL isUserRequested;
@property (nonatomic, readonly) BOOL shouldSend;

- (id)deferredOperation;
- (unsigned long long)generationNumber;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUserRequested;
- (BOOL)shouldSend;

@end