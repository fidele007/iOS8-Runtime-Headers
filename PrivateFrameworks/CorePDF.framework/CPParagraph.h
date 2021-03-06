/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPListItem;

@interface CPParagraph : CPRegion  {
    boolnoIndentation;
    boolbelow;
    unsigned long long alignment;
    boolhasDropCap;
    id flowProperties;
    CPListItem *listItem;
    double preformatWidth;
}

@property(retain) CPListItem * listItem;


- (bool)isPreformattedWithUnitWidth:(double*)arg1;
- (bool)below;
- (void)setBelow:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })reducedBounds;
- (void)explode;
- (void)setHasDropCap:(bool)arg1;
- (bool)hasDropCap;
- (bool)noIndentation;
- (void)setNoIndentation:(bool)arg1;
- (void)setIsTextRegion:(bool)arg1;
- (bool)isTextRegion;
- (bool)isListItemRegion;
- (bool)isParagraphRegion;
- (void)setFlowProperties:(id)arg1;
- (id)flowProperties;
- (bool)isShapeRegion;
- (bool)isImageRegion;
- (void)setIsImageRegion:(bool)arg1;
- (bool)isRowRegion;
- (bool)isGraphicalRegion;
- (bool)isBoxRegion;
- (double)selectionBottom;
- (void)setListItem:(id)arg1;
- (id)listItem;
- (void)accept:(id)arg1;
- (unsigned long long)index;
- (void)setAlignment:(unsigned long long)arg1;
- (unsigned long long)alignment;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
