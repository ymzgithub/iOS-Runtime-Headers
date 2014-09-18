/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class CALayer, NSArray, NSObject<SFPersonCollectionViewCellDelegate>, NSProgress, NSString, SFAirDropNode, SFCircleProgressView, UIColor, UILabel, _SFPersonImageView;

@interface SFPersonCollectionViewCell : UICollectionViewCell {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    long long _cellState;
    SFCircleProgressView *_circleProgressView;
    UILabel *_declinedLabel;
    NSObject<SFPersonCollectionViewCellDelegate> *_delegate;
    UILabel *_failedLabel;
    UILabel *_nameLabel;
    CALayer *_nameLabelMaskLayer;
    } _nameLabelOneLineFrame;
    double _nameLabelOriginY;
    } _nameLabelTwoLinesFrame;
    SFAirDropNode *_person;
    _SFPersonImageView *_personImageView;
    } _personViewFrame;
    NSProgress *_progress;
    NSArray *_progressKeyPaths;
    id _progressToken;
    UILabel *_secondaryNameLabel;
    UILabel *_sendingLabel;
    UILabel *_sentLabel;
    NSString *_sessionID;
    UIColor *_textColor;
    UILabel *_waitingLabel;
    bool_darkStyleOnLegacyApp;
    bool_stateBeingRestored;
}

@property long long cellState;
@property bool darkStyleOnLegacyApp;
@property NSObject<SFPersonCollectionViewCellDelegate> * delegate;
@property(retain) SFAirDropNode * person;
@property(retain) NSProgress * progress;
@property(retain) NSString * sessionID;
@property bool stateBeingRestored;
@property(retain) UIColor * textColor;

- (void).cxx_destruct;
- (void)addObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)animateCellShow:(bool)arg1 delay:(double)arg2 completion:(id)arg3;
- (long long)cellState;
- (id)createLabelWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)darkStyleOnLegacyApp;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (void)handleKVOUpdateForPerson:(id)arg1 keyPath:(id)arg2;
- (void)handleKVOUpdateForProgress:(id)arg1 keyPath:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)person;
- (void)prepareForReuse;
- (id)progress;
- (void)removeObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)resetNameLabel;
- (void)resetPersonIconView;
- (void)restoreCellStateFromFinalTransferState:(long long)arg1;
- (id)sessionID;
- (void)setCellState:(long long)arg1 animated:(bool)arg2;
- (void)setCellState:(long long)arg1;
- (void)setDarkStyleOnLegacyApp:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPerson:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setStateBeingRestored:(bool)arg1;
- (void)setTextColor:(id)arg1;
- (bool)stateBeingRestored;
- (void)switchToStatusLabel:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (id)textColor;
- (void)triggerKVOForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)updateNameLabel;
- (void)updatePersonIconView;
- (void)userDidCancel;
- (void)userDidSelect;
- (id)visibleStatusLabel;

@end