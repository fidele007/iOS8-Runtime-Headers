/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface BLAlertAction : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;

    NSString *_name;
}

@property(readonly) id block;
@property(readonly) NSString * name;

+ (id)actionWithName:(id)arg1 andBlock:(id)arg2;
+ (id)cancelAction;

- (id)initWithName:(id)arg1 andBlock:(id)arg2;
- (id)name;
- (void).cxx_destruct;
- (id)block;

@end
