/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, NSMutableDictionary, NSURL, NSDictionary;

@interface SKUIURL : NSObject <NSCopying> {
    NSMutableDictionary *_queryDictionary;
    NSString *_referrerApplicationName;
    NSString *_referrerURLString;
    NSURL *_url;
}

@property(readonly) NSURL * underlyingURL;
@property(readonly) NSString * actionString;
@property(copy,readonly) NSDictionary * queryStringDictionary;
@property(readonly) NSString * redeemCode;
@property(readonly) NSString * searchTerm;
@property(readonly) NSString * URLBagKey;
@property(copy) NSString * referrerApplicationName;
@property(copy) NSString * referrerURLString;


- (void)setReferrerURLString:(id)arg1;
- (void)setReferrerApplicationName:(id)arg1;
- (id)initWithURLBagKey:(id)arg1;
- (id)referrerURLString;
- (id)referrerApplicationName;
- (id)underlyingURL;
- (id)_searchURLBagKey;
- (id)_queryDictionary;
- (id)redeemCode;
- (id)newURLRequestWithBaseURL:(id)arg1;
- (id)valueForQueryParameter:(id)arg1;
- (id)actionString;
- (id)newURLRequest;
- (id)searchTerm;
- (id)queryStringDictionary;
- (id)URLBagKey;
- (id)initWithURL:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
