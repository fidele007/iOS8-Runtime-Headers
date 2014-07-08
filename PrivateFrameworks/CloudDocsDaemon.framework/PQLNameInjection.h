/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSString, NSData;

@interface PQLNameInjection : NSObject <PQLInjecting> {
    NSString *_name;
    NSData *_sql;
}

@property(readonly) NSData * sql;

+ (id)nameWithString:(id)arg1;
+ (id)nameWithPrefix:(id)arg1 suffix:(id)arg2;

- (int)bindWithStatement:(struct sqlite3_stmt { }*)arg1 startingAtIndex:(int)arg2;
- (id)nameByAddingSuffix:(id)arg1;
- (id)sql;
- (id)initWithString:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end
