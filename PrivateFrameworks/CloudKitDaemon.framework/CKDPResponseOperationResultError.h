/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPResponseOperationResultErrorServer, NSString, CKDPResponseOperationResultErrorExtension, CKDPResponseOperationResultErrorClient;

@interface CKDPResponseOperationResultError : PBCodable <NSCopying> {
    CKDPResponseOperationResultErrorClient *_clientError;
    NSString *_errorDescription;
    NSString *_errorInternal;
    NSString *_errorKey;
    CKDPResponseOperationResultErrorExtension *_extensionError;
    int _retryAfterSeconds;
    CKDPResponseOperationResultErrorServer *_serverError;
    struct { 
        unsigned int retryAfterSeconds : 1; 
    } _has;
}

@property(readonly) bool hasClientError;
@property(retain) CKDPResponseOperationResultErrorClient * clientError;
@property(readonly) bool hasServerError;
@property(retain) CKDPResponseOperationResultErrorServer * serverError;
@property(readonly) bool hasExtensionError;
@property(retain) CKDPResponseOperationResultErrorExtension * extensionError;
@property bool hasRetryAfterSeconds;
@property int retryAfterSeconds;
@property(readonly) bool hasErrorDescription;
@property(retain) NSString * errorDescription;
@property(readonly) bool hasErrorKey;
@property(retain) NSString * errorKey;
@property(readonly) bool hasErrorInternal;
@property(retain) NSString * errorInternal;


- (id)errorInternal;
- (bool)hasErrorInternal;
- (void)setHasRetryAfterSeconds:(bool)arg1;
- (void)setRetryAfterSeconds:(int)arg1;
- (void)setExtensionError:(id)arg1;
- (void)setErrorInternal:(id)arg1;
- (void)setServerError:(id)arg1;
- (id)errorKey;
- (bool)hasErrorKey;
- (void)setErrorKey:(id)arg1;
- (void)setClientError:(id)arg1;
- (bool)hasErrorDescription;
- (int)retryAfterSeconds;
- (bool)hasRetryAfterSeconds;
- (id)extensionError;
- (bool)hasExtensionError;
- (id)serverError;
- (bool)hasServerError;
- (id)clientError;
- (bool)hasClientError;
- (void)setErrorDescription:(id)arg1;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)errorDescription;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
