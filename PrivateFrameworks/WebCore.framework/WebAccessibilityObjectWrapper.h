/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WebAccessibilityObjectWrapper : WebAccessibilityObjectWrapperBase  {
    int m_isAccessibilityElement;
    unsigned long long m_accessibilityTraitsFromAncestor;
}


- (void)accessibilitySetPostedNotificationCallback:(int (*)())arg1 withContext:(void*)arg2;
- (struct CGPoint { double x1; double x2; })accessibilityClickPoint;
- (id)accessibilityMathType;
- (long long)accessibilityMathLineThickness;
- (bool)accessibilityIsMathTopObject;
- (id)accessibilityMathFencedCloseString;
- (id)accessibilityMathFencedOpenString;
- (id)accessibilityMathPrescripts;
- (id)accessibilityMathPostscripts;
- (id)accessibilityMathOverObject;
- (id)accessibilityMathUnderObject;
- (id)accessibilityMathSuperscriptObject;
- (id)accessibilityMathSubscriptObject;
- (id)accessibilityMathBaseObject;
- (id)accessibilityMathDenominatorObject;
- (id)accessibilityMathNumeratorObject;
- (id)accessibilityMathRadicandObject;
- (id)accessibilityMathRootIndexObject;
- (id)accessibilityInvalidStatus;
- (bool)accessibilityIsExpanded;
- (bool)accessibilityARIALiveRegionIsAtomic;
- (id)accessibilityARIARelevantStatus;
- (id)accessibilityARIALiveRegionStatus;
- (bool)accessibilityARIAIsBusy;
- (id)accessibilitySpeechHint;
- (id)textMarkerForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForTextMarkers:(id)arg1;
- (id)previousMarkerForMarker:(id)arg1;
- (id)nextMarkerForMarker:(id)arg1;
- (id)lineStartMarkerForMarker:(id)arg1;
- (id)lineEndMarkerForMarker:(id)arg1;
- (id)selectedTextMarker;
- (id)selectionRangeString;
- (id)elementsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilitySelectedTextRange;
- (id)attributedStringForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct WebAccessibilityObjectWrapper { Class x1; struct AccessibilityObject {} *x2; int x3; unsigned long long x4; }*)accessibilityObjectForTextMarker:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })elementTextRange;
- (void)accessibilityMoveSelectionToMarker:(id)arg1;
- (void)accessibilityDecreaseSelection:(int)arg1;
- (void)accessibilityIncreaseSelection:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityScrollVisibleRect;
- (struct CGSize { double x1; double x2; })_accessibilityScrollSize;
- (struct CGPoint { double x1; double x2; })_accessibilityScrollPosition;
- (void)_accessibilityActivate;
- (id)accessibilityLinkedElement;
- (id)accessibilityFlowToElements;
- (bool)accessibilityRequired;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityElementRect;
- (bool)_accessibilityScrollToVisible;
- (struct CGPoint { double x1; double x2; })_accessibilityConvertPointToViewSpace:(struct CGPoint { double x1; double x2; })arg1;
- (id)accessibilityURL;
- (bool)accessibilityIsComboBox;
- (id)accessibilityPlaceholderValue;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityColumnRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityRowRange;
- (id)accessibilityElementForRow:(long long)arg1 andColumn:(long long)arg2;
- (id)accessibilityHeaderElements;
- (id)accessibilityTitleElement;
- (double)_accessibilityMaxValue;
- (double)_accessibilityMinValue;
- (struct WebAccessibilityObjectWrapper { Class x1; struct AccessibilityObject {} *x2; int x3; unsigned long long x4; }*)_accessibilityTableAncestor;
- (struct WebAccessibilityObjectWrapper { Class x1; struct AccessibilityObject {} *x2; int x3; unsigned long long x4; }*)_accessibilityLandmarkAncestor;
- (struct WebAccessibilityObjectWrapper { Class x1; struct AccessibilityObject {} *x2; int x3; unsigned long long x4; }*)_accessibilityListAncestor;
- (struct CGPath { }*)_accessibilityPath;
- (void)disableAttributeCaching;
- (void)enableAttributeCaching;
- (id)stringForTextMarkers:(id)arg1;
- (id)textMarkerRangeForSelection;
- (id)_stringForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 attributed:(bool)arg2;
- (id)arrayOfTextForTextMarkers:(id)arg1 attributed:(bool)arg2;
- (id)textMarkerForPosition:(long long)arg1;
- (struct PassRefPtr<WebCore::Range> { struct Range {} *x1; })_convertToDOMRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (long long)positionForTextMarker:(id)arg1;
- (id)textMarkerRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_convertToNSRange:(struct Range { unsigned int x1; struct Ref<WebCore::Document> { struct Document {} *x_2_1_1; } x2; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_3_1_1; int x_3_1_2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_2_1; } x_3_1_3; } x3; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_4_1_1; int x_4_1_2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_2_1; } x_4_1_3; } x4; }*)arg1;
- (bool)_addAccessibilityObject:(struct AccessibilityObject { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::AccessibilityObject> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; boolx5; int x6; int x7; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x_8_1_1; } x8; }*)arg1 toTextMarkerArray:(id)arg2;
- (void)accessibilityModifySelection:(int)arg1 increase:(bool)arg2;
- (id)_accessibilityPreviousElementsWithCount:(unsigned int)arg1;
- (id)_accessibilityNextElementsWithCount:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToScreenSpace:(struct IntRect { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; struct IntSize { int x_2_1_1; int x_2_1_2; } x2; }*)arg1;
- (id)_accessibilityWebDocumentView;
- (void)postScrollStatusChangeNotification;
- (struct AccessibilityTable { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::AccessibilityObject> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; boolx5; int x6; int x7; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x_8_1_1; } x8; int x9; boolx10; int x11; struct Node {} *x12; struct RenderObject {} *x13; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::AccessibilityObject> {} *x_14_1_1; unsigned int x_14_1_2; unsigned int x_14_1_3; } x14; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::AccessibilityObject> {} *x_15_1_1; unsigned int x_15_1_2; unsigned int x_15_1_3; } x15; struct RefPtr<WebCore::AccessibilityObject> { struct AccessibilityObject {} *x_16_1_1; } x16; boolx17; }*)tableParent;
- (struct AccessibilityTableCell { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::AccessibilityObject> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; boolx5; int x6; int x7; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x_8_1_1; } x8; int x9; boolx10; int x11; struct Node {} *x12; struct RenderObject {} *x13; int x14; }*)tableCellParent;
- (bool)stringValueShouldBeUsedInLabel;
- (bool)determineIsAccessibilityElement;
- (bool)isSVGGroupElement;
- (bool)containsUnnaturallySegmentedChildren;
- (id)accessibilityContainer;
- (bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)_accessibilityTraitsFromAncestors;
- (unsigned long long)_axNotEnabledTrait;
- (unsigned long long)_axSelectedTrait;
- (unsigned long long)_axMenuItemTrait;
- (unsigned long long)_axAdjustableTrait;
- (unsigned long long)_axStaticTextTrait;
- (unsigned long long)_axRadioButtonTrait;
- (unsigned long long)_axPopupButtonTrait;
- (unsigned long long)_axToggleTrait;
- (unsigned long long)_axButtonTrait;
- (unsigned long long)_axTabButtonTrait;
- (unsigned long long)_axImageTrait;
- (unsigned long long)_axTextOperationsAvailableTrait;
- (unsigned long long)_axHasTextCursorTrait;
- (unsigned long long)_axTextEntryTrait;
- (unsigned long long)_axSecureTextFieldTrait;
- (unsigned long long)_axWebContentTrait;
- (unsigned long long)_axContainedByLandmarkTrait;
- (unsigned long long)_axContainedByTableTrait;
- (unsigned long long)_axContainedByListTrait;
- (id)accessibilityValue;
- (unsigned long long)_axHeaderTrait;
- (unsigned long long)_axVisitedTrait;
- (unsigned long long)_axLinkTrait;
- (bool)_accessibilityIsLandmarkRole:(int)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (bool)isAttachment;
- (struct WebAccessibilityObjectWrapper { Class x1; struct AccessibilityObject {} *x2; int x3; unsigned long long x4; }*)accessibilityPostProcessHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (bool)accessibilityCanFuzzyHitTest;
- (bool)_prepareAccessibilityCall;
- (struct CGPoint { double x1; double x2; })convertPointToScreenSpace:(struct FloatPoint { float x1; float x2; }*)arg1;
- (id)accessibilityPlatformMathSuperscriptKey;
- (id)accessibilityPlatformMathSubscriptKey;
- (bool)fileUploadButtonReturnsValueInTitle;
- (void)accessibilityPostedNotification:(id)arg1;
- (void)postValueChangedNotification;
- (void)postInvalidStatusChangedNotification;
- (void)postLoadCompleteNotification;
- (void)postChildrenChangedNotification;
- (void)postLiveRegionCreatedNotification;
- (void)postLiveRegionChangeNotification;
- (void)postLayoutChangeNotification;
- (void)postSelectedTextChangeNotification;
- (void)postFocusChangeNotification;
- (id)initWithAccessibilityObject:(struct AccessibilityObject { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::AccessibilityObject> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; boolx5; int x6; int x7; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x_8_1_1; } x8; }*)arg1;
- (void)detach;
- (id)attachmentView;
- (id)_accessibilityParentForSubview:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (id)accessibilityFocusedUIElement;
- (void)dealloc;
- (bool)accessibilityScroll:(long long)arg1;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityLanguage;
- (unsigned long long)accessibilityTraits;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityHint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)stringForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)accessibilityIdentifier;

@end
