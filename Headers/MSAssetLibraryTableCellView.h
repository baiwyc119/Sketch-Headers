//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class MSAssetLibrariesPreferencePane, MSAssetLibraryPreview, MSAssetPreferenceItem, NSProgressIndicator, NSTextField;

@interface MSAssetLibraryTableCellView : NSTableCellView
{
    BOOL _quickLookButtonHidden;
    BOOL _downloadButtonHidden;
    BOOL _downloadProgressHidden;
    NSTextField *_primaryTextField;
    NSTextField *_secondaryTextField;
    NSTextField *_updateAvailablePrimaryTextField;
    NSTextField *_updateAvailableSecondaryTextField;
    NSTextField *_updateAvailableTextField;
    MSAssetLibrariesPreferencePane *_libraryPreferencePane;
    MSAssetLibraryPreview *_previewContainer;
    NSProgressIndicator *_downloadProgress;
}

+ (id)sketchRemoteLibraryPlaceholderImage;
+ (id)missingLibraryPlaceholderImage;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)initialize;
@property(nonatomic) BOOL downloadProgressHidden; // @synthesize downloadProgressHidden=_downloadProgressHidden;
@property(nonatomic) BOOL downloadButtonHidden; // @synthesize downloadButtonHidden=_downloadButtonHidden;
@property(nonatomic) BOOL quickLookButtonHidden; // @synthesize quickLookButtonHidden=_quickLookButtonHidden;
@property(nonatomic) __weak NSProgressIndicator *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) __weak MSAssetLibraryPreview *previewContainer; // @synthesize previewContainer=_previewContainer;
@property(nonatomic) __weak MSAssetLibrariesPreferencePane *libraryPreferencePane; // @synthesize libraryPreferencePane=_libraryPreferencePane;
@property(nonatomic) __weak NSTextField *updateAvailableTextField; // @synthesize updateAvailableTextField=_updateAvailableTextField;
@property(nonatomic) __weak NSTextField *updateAvailableSecondaryTextField; // @synthesize updateAvailableSecondaryTextField=_updateAvailableSecondaryTextField;
@property(nonatomic) __weak NSTextField *updateAvailablePrimaryTextField; // @synthesize updateAvailablePrimaryTextField=_updateAvailablePrimaryTextField;
@property(nonatomic) __weak NSTextField *secondaryTextField; // @synthesize secondaryTextField=_secondaryTextField;
@property(nonatomic) __weak NSTextField *primaryTextField; // @synthesize primaryTextField=_primaryTextField;
- (void).cxx_destruct;
- (void)setPrimaryTextFieldTextColor:(id)arg1;
- (void)setSecondaryTextFieldTextColor:(id)arg1;
- (void)downloadLibrary:(id)arg1;
@property(nonatomic) BOOL enabled;
@property(readonly, nonatomic) MSAssetPreferenceItem *assetPreferenceItem;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startDownloadWithEnable:(BOOL)arg1;
- (void)startDownloading;
- (void)setupButtons;
- (void)generatePreviewImage;
- (void)setObjectValue:(id)arg1;
- (void)setBackgroundStyle:(long long)arg1;

@end

