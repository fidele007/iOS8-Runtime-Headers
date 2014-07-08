/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMChat;

@interface IMTranscriptChatItemRules : NSObject <IMChatItemRules> {
    IMChat *_chat;
}


- (bool)_shouldRegenerateChatItemsForItem:(id)arg1 previousItem:(id)arg2 oldPreviousItem:(id)arg3;
- (id)_chatItemsForItem:(id)arg1 previousItem:(id)arg2;
- (bool)shouldShowRaiseMessageStatus;
- (id)chatItemForIMChatItem:(id)arg1;
- (id)testChatItems;
- (id)_itemWithChatItemsDeleted:(id)arg1 fromItem:(id)arg2;
- (bool)_shouldReloadChatItem:(id)arg1 oldChatItem:(id)arg2;
- (void)_didProcessChatItems:(id)arg1;
- (id)_initWithChat:(id)arg1;
- (void)_invalidate;

@end
