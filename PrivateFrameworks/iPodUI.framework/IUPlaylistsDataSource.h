/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@interface IUPlaylistsDataSource : IUPlaylistDataSource  {
}

+ (id)queryCollectionPropertiesToFetch;
+ (id)tabBarItemTitleKey;
+ (id)tabBarItemIconName;

- (int)initialSelectedIndex;
- (id)_otgActionRow;
- (id)_newOnTheGoViewControllerContext;
- (id)_newActiveGeniusViewControllerContext;
- (id)_newGeniusNotEnabledViewControllerContext;
- (id)_addPlaylistActionRow;
- (id)_geniusActionRow;
- (int)initialVisibleIndex;
- (id)entitiesForQuery:(id)arg1;
- (id)viewControllerContextForActionRow:(id)arg1;
- (Class)cellConfigurationClassForEntity:(id)arg1;
- (SEL)libraryHasDisplayableEntitiesSelector;
- (void)reloadActionRows;
- (BOOL)hasActionRowsEvenWhenNoOtherRowsExist;
- (int)mediaDisclosureStyleForIndex:(unsigned int)arg1;
- (id)cellConfigurationForIndex:(unsigned int)arg1 shouldLoadArtwork:(BOOL)arg2 artworkLoadingCompletionHandler:(id)arg3;
- (id)prefixActionRows;

@end