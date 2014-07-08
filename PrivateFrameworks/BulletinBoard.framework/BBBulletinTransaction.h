/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSString;

@interface BBBulletinTransaction : NSObject  {
    NSString *_bulletinID;
    unsigned long long _transactionID;
}

@property(copy,readonly) NSString * bulletinID;
@property(readonly) unsigned long long transactionID;

+ (id)transactionWithBulletinID:(id)arg1;

- (id)initWithBulletinID:(id)arg1;
- (unsigned long long)incrementTransactionID;
- (id)bulletinID;
- (unsigned long long)transactionID;
- (void)dealloc;
- (id)description;

@end
