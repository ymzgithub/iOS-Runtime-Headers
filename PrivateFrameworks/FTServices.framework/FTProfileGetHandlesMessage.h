/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSArray;

@interface FTProfileGetHandlesMessage : FTProfileMessage <NSCopying> {
    NSArray *_responseHandles;
}

@property(copy) NSArray * responseHandles;

- (id)bagKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)handleResponseDictionary:(id)arg1;
- (id)init;
- (id)messageBody;
- (id)requiredKeys;
- (id)responseHandles;
- (void)setResponseHandles:(id)arg1;

@end