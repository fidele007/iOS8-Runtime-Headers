/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKImageFileUploadItem : _WKFileUploadItem  {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    } _filePath;
    struct RetainPtr<UIImage> { 
        void *m_ptr; 
    } _originalImage;
}


- (id)initWithFilePath:(id)arg1 originalImage:(id)arg2;
- (bool)isVideo;
- (id)fileURL;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)displayImage;

@end
