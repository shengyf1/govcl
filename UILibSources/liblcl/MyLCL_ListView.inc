
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function ListView_Create(AOwner: TComponent): TListView; extdecl;
begin
  Result :=  TListView.Create(AOwner);
  Result.ScrollBars := ssAutoBoth;
end;

procedure ListView_Free(AObj: TListView); extdecl;
begin
  AObj.Free;
end;

function ListView_AlphaSort(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.AlphaSort;
end;

procedure ListView_Clear(AObj: TListView); extdecl;
begin
  AObj.Clear;
end;

procedure ListView_ClearSelection(AObj: TListView); extdecl;
begin
  AObj.ClearSelection;
end;

procedure ListView_DeleteSelected(AObj: TListView); extdecl;
begin
  AObj.DeleteSelected;
end;

function ListView_IsEditing(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.IsEditing;
end;

procedure ListView_SelectAll(AObj: TListView); extdecl;
begin
  AObj.SelectAll;
end;

function ListView_CustomSort(AObj: TListView; SortProc: PFNLVCOMPARE; lParam: NativeInt): LongBool; extdecl;
begin
  Result :=  AObj.CustomSort(SortProc, lParam);
end;

function ListView_CanFocus(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.CanFocus;
end;

function ListView_ContainsControl(AObj: TListView; Control: TControl): LongBool; extdecl;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function ListView_ControlAtPos(AObj: TListView; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
end;

procedure ListView_DisableAlign(AObj: TListView); extdecl;
begin
  AObj.DisableAlign;
end;

procedure ListView_EnableAlign(AObj: TListView); extdecl;
begin
  AObj.EnableAlign;
end;

function ListView_FindChildControl(AObj: TListView; ControlName: PChar): TControl; extdecl;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure ListView_FlipChildren(AObj: TListView; AllLevels: LongBool); extdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function ListView_Focused(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.Focused;
end;

function ListView_HandleAllocated(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure ListView_InsertControl(AObj: TListView; AControl: TControl); extdecl;
begin
  AObj.InsertControl(AControl);
end;

procedure ListView_Invalidate(AObj: TListView); extdecl;
begin
  AObj.Invalidate;
end;

procedure ListView_RemoveControl(AObj: TListView; AControl: TControl); extdecl;
begin
  AObj.RemoveControl(AControl);
end;

procedure ListView_Realign(AObj: TListView); extdecl;
begin
  AObj.Realign;
end;

procedure ListView_Repaint(AObj: TListView); extdecl;
begin
  AObj.Repaint;
end;

procedure ListView_ScaleBy(AObj: TListView; M: Integer; D: Integer); extdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure ListView_ScrollBy(AObj: TListView; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure ListView_SetBounds(AObj: TListView; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure ListView_SetFocus(AObj: TListView); extdecl;
begin
  AObj.SetFocus;
end;

procedure ListView_Update(AObj: TListView); extdecl;
begin
  AObj.Update;
end;

procedure ListView_BringToFront(AObj: TListView); extdecl;
begin
  AObj.BringToFront;
end;

procedure ListView_ClientToScreen(AObj: TListView; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure ListView_ClientToParent(AObj: TListView; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function ListView_Dragging(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function ListView_HasParent(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure ListView_Hide(AObj: TListView); extdecl;
begin
  AObj.Hide;
end;

function ListView_Perform(AObj: TListView; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure ListView_Refresh(AObj: TListView); extdecl;
begin
  AObj.Refresh;
end;

procedure ListView_ScreenToClient(AObj: TListView; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure ListView_ParentToClient(AObj: TListView; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure ListView_SendToBack(AObj: TListView); extdecl;
begin
  AObj.SendToBack;
end;

procedure ListView_Show(AObj: TListView); extdecl;
begin
  AObj.Show;
end;

function ListView_GetTextBuf(AObj: TListView; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function ListView_GetTextLen(AObj: TListView): Integer; extdecl;
begin
  Result :=  AObj.GetTextLen;
end;

procedure ListView_SetTextBuf(AObj: TListView; Buffer: PChar); extdecl;
begin
  AObj.SetTextBuf(Buffer);
end;

function ListView_FindComponent(AObj: TListView; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function ListView_GetNamePath(AObj: TListView): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure ListView_Assign(AObj: TListView; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function ListView_ClassType(AObj: TListView): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function ListView_ClassName(AObj: TListView): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function ListView_InstanceSize(AObj: TListView): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function ListView_InheritsFrom(AObj: TListView; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function ListView_Equals(AObj: TListView; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ListView_GetHashCode(AObj: TListView): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ListView_ToString(AObj: TListView): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function ListView_GetAction(AObj: TListView): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure ListView_SetAction(AObj: TListView; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

function ListView_GetAlign(AObj: TListView): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure ListView_SetAlign(AObj: TListView; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function ListView_GetAllocBy(AObj: TListView): Integer; extdecl;
begin
  Result :=  AObj.AllocBy;
end;

procedure ListView_SetAllocBy(AObj: TListView; AValue: Integer); extdecl;
begin
  AObj.AllocBy := AValue;
end;

function ListView_GetAnchors(AObj: TListView): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure ListView_SetAnchors(AObj: TListView; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

function ListView_GetBiDiMode(AObj: TListView): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure ListView_SetBiDiMode(AObj: TListView; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

function ListView_GetBorderStyle(AObj: TListView): TBorderStyle; extdecl;
begin
  Result :=  AObj.BorderStyle;
end;

procedure ListView_SetBorderStyle(AObj: TListView; AValue: TBorderStyle); extdecl;
begin
  AObj.BorderStyle := AValue;
end;

function ListView_GetBorderWidth(AObj: TListView): TBorderWidth; extdecl;
begin
  Result :=  AObj.BorderWidth;
end;

procedure ListView_SetBorderWidth(AObj: TListView; AValue: TBorderWidth); extdecl;
begin
  AObj.BorderWidth := AValue;
end;

function ListView_GetCheckboxes(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.Checkboxes;
end;

procedure ListView_SetCheckboxes(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.Checkboxes := AValue;
end;

function ListView_GetColor(AObj: TListView): TColor; extdecl;
begin
  Result :=  AObj.Color;
end;

procedure ListView_SetColor(AObj: TListView; AValue: TColor); extdecl;
begin
  AObj.Color := AValue;
end;

function ListView_GetColumns(AObj: TListView): TListColumns; extdecl;
begin
  Result :=  AObj.Columns;
end;

procedure ListView_SetColumns(AObj: TListView; AValue: TListColumns); extdecl;
begin
  AObj.Columns := AValue;
end;

function ListView_GetColumnClick(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.ColumnClick;
end;

procedure ListView_SetColumnClick(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.ColumnClick := AValue;
end;

function ListView_GetDoubleBuffered(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure ListView_SetDoubleBuffered(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function ListView_GetDragCursor(AObj: TListView): TCursor; extdecl;
begin
  Result :=  AObj.DragCursor;
end;

procedure ListView_SetDragCursor(AObj: TListView; AValue: TCursor); extdecl;
begin
  AObj.DragCursor := AValue;
end;

function ListView_GetDragKind(AObj: TListView): TDragKind; extdecl;
begin
  Result :=  AObj.DragKind;
end;

procedure ListView_SetDragKind(AObj: TListView; AValue: TDragKind); extdecl;
begin
  AObj.DragKind := AValue;
end;

function ListView_GetDragMode(AObj: TListView): TDragMode; extdecl;
begin
  Result :=  AObj.DragMode;
end;

procedure ListView_SetDragMode(AObj: TListView; AValue: TDragMode); extdecl;
begin
  AObj.DragMode := AValue;
end;

function ListView_GetEnabled(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure ListView_SetEnabled(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function ListView_GetFont(AObj: TListView): TFont; extdecl;
begin
  Result :=  AObj.Font;
end;

procedure ListView_SetFont(AObj: TListView; AValue: TFont); extdecl;
begin
  AObj.Font := AValue;
end;

function ListView_GetFlatScrollBars(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.FlatScrollBars;
end;

procedure ListView_SetFlatScrollBars(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.FlatScrollBars := AValue;
end;

function ListView_GetFullDrag(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.FullDrag;
end;

procedure ListView_SetFullDrag(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.FullDrag := AValue;
end;

function ListView_GetGridLines(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.GridLines;
end;

procedure ListView_SetGridLines(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.GridLines := AValue;
end;

function ListView_GetHideSelection(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.HideSelection;
end;

procedure ListView_SetHideSelection(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.HideSelection := AValue;
end;

function ListView_GetHotTrack(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.HotTrack;
end;

procedure ListView_SetHotTrack(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.HotTrack := AValue;
end;

function ListView_GetIconOptions(AObj: TListView): TIconOptions; extdecl;
begin
  Result :=  AObj.IconOptions;
end;

procedure ListView_SetIconOptions(AObj: TListView; AValue: TIconOptions); extdecl;
begin
  AObj.IconOptions := AValue;
end;

function ListView_GetItems(AObj: TListView): TListItems; extdecl;
begin
  Result :=  AObj.Items;
end;

procedure ListView_SetItems(AObj: TListView; AValue: TListItems); extdecl;
begin
  AObj.Items := AValue;
end;

function ListView_GetLargeImages(AObj: TListView): TCustomImageList; extdecl;
begin
  Result :=  AObj.LargeImages;
end;

procedure ListView_SetLargeImages(AObj: TListView; AValue: TCustomImageList); extdecl;
begin
  AObj.LargeImages := AValue;
end;

function ListView_GetMultiSelect(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.MultiSelect;
end;

procedure ListView_SetMultiSelect(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.MultiSelect := AValue;
end;

function ListView_GetOwnerData(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.OwnerData;
end;

procedure ListView_SetOwnerData(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.OwnerData := AValue;
end;

function ListView_GetOwnerDraw(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.OwnerDraw;
end;

procedure ListView_SetOwnerDraw(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.OwnerDraw := AValue;
end;

function ListView_GetReadOnly(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.ReadOnly;
end;

procedure ListView_SetReadOnly(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.ReadOnly := AValue;
end;

function ListView_GetRowSelect(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.RowSelect;
end;

procedure ListView_SetRowSelect(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.RowSelect := AValue;
end;

function ListView_GetParentColor(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure ListView_SetParentColor(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.ParentColor := AValue;
end;

function ListView_GetParentFont(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure ListView_SetParentFont(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.ParentFont := AValue;
end;

function ListView_GetParentShowHint(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure ListView_SetParentShowHint(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function ListView_GetPopupMenu(AObj: TListView): TPopupMenu; extdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure ListView_SetPopupMenu(AObj: TListView; AValue: TPopupMenu); extdecl;
begin
  AObj.PopupMenu := AValue;
end;

function ListView_GetShowColumnHeaders(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.ShowColumnHeaders;
end;

procedure ListView_SetShowColumnHeaders(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.ShowColumnHeaders := AValue;
end;

function ListView_GetShowHint(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure ListView_SetShowHint(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function ListView_GetSmallImages(AObj: TListView): TCustomImageList; extdecl;
begin
  Result :=  AObj.SmallImages;
end;

procedure ListView_SetSmallImages(AObj: TListView; AValue: TCustomImageList); extdecl;
begin
  AObj.SmallImages := AValue;
end;

function ListView_GetSortType(AObj: TListView): TSortType; extdecl;
begin
  Result :=  AObj.SortType;
end;

procedure ListView_SetSortType(AObj: TListView; AValue: TSortType); extdecl;
begin
  AObj.SortType := AValue;
end;

function ListView_GetStateImages(AObj: TListView): TCustomImageList; extdecl;
begin
  Result :=  AObj.StateImages;
end;

procedure ListView_SetStateImages(AObj: TListView; AValue: TCustomImageList); extdecl;
begin
  AObj.StateImages := AValue;
end;

function ListView_GetTabOrder(AObj: TListView): TTabOrder; extdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure ListView_SetTabOrder(AObj: TListView; AValue: TTabOrder); extdecl;
begin
  AObj.TabOrder := AValue;
end;

function ListView_GetTabStop(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure ListView_SetTabStop(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.TabStop := AValue;
end;

function ListView_GetViewStyle(AObj: TListView): TViewStyle; extdecl;
begin
  Result :=  AObj.ViewStyle;
end;

procedure ListView_SetViewStyle(AObj: TListView; AValue: TViewStyle); extdecl;
begin
  AObj.ViewStyle := AValue;
end;

function ListView_GetVisible(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure ListView_SetVisible(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

procedure ListView_SetOnAdvancedCustomDraw(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnAdvancedCustomDraw}
  {$DEFINE EventMethodName := ListViewOnAdvancedCustomDraw}
  EventMethodCode
end;

procedure ListView_SetOnAdvancedCustomDrawItem(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnAdvancedCustomDrawItem}
  {$DEFINE EventMethodName := ListViewOnAdvancedCustomDrawItem}
  EventMethodCode
end;

procedure ListView_SetOnAdvancedCustomDrawSubItem(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnAdvancedCustomDrawSubItem}
  {$DEFINE EventMethodName := ListViewOnAdvancedCustomDrawSubItem}
  EventMethodCode
end;

procedure ListView_SetOnChange(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnChange}
  {$DEFINE EventMethodName := ListViewOnChange}
  EventMethodCode
end;

procedure ListView_SetOnClick(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnClick}
  {$DEFINE EventMethodName := OnClick}
  EventMethodCode
end;

procedure ListView_SetOnColumnClick(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnColumnClick}
  {$DEFINE EventMethodName := ListViewOnColumnClick}
  EventMethodCode
end;

procedure ListView_SetOnCompare(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnCompare}
  {$DEFINE EventMethodName := ListViewOnCompare}
  EventMethodCode
end;

procedure ListView_SetOnContextPopup(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnContextPopup}
  {$DEFINE EventMethodName := OnContextPopup}
  EventMethodCode
end;

procedure ListView_SetOnCustomDraw(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnCustomDraw}
  {$DEFINE EventMethodName := ListViewOnCustomDraw}
  EventMethodCode
end;

procedure ListView_SetOnCustomDrawItem(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnCustomDrawItem}
  {$DEFINE EventMethodName := ListViewOnCustomDrawItem}
  EventMethodCode
end;

procedure ListView_SetOnCustomDrawSubItem(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnCustomDrawSubItem}
  {$DEFINE EventMethodName := ListViewOnCustomDrawSubItem}
  EventMethodCode
end;

procedure ListView_SetOnData(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnData}
  {$DEFINE EventMethodName := ListViewOnData}
  EventMethodCode
end;

procedure ListView_SetOnDataFind(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDataFind}
  {$DEFINE EventMethodName := ListViewOnDataFind}
  EventMethodCode
end;

procedure ListView_SetOnDblClick(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDblClick}
  {$DEFINE EventMethodName := OnDblClick}
  EventMethodCode
end;

procedure ListView_SetOnDeletion(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDeletion}
  {$DEFINE EventMethodName := ListViewOnDeletion}
  EventMethodCode
end;

procedure ListView_SetOnEdited(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEdited}
  {$DEFINE EventMethodName := ListViewOnEdited}
  EventMethodCode
end;

procedure ListView_SetOnEditing(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEditing}
  {$DEFINE EventMethodName := ListViewOnEditing}
  EventMethodCode
end;

procedure ListView_SetOnEndDock(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDock}
  {$DEFINE EventMethodName := OnEndDock}
  EventMethodCode
end;

procedure ListView_SetOnEndDrag(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDrag}
  {$DEFINE EventMethodName := OnEndDrag}
  EventMethodCode
end;

procedure ListView_SetOnEnter(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEnter}
  {$DEFINE EventMethodName := OnEnter}
  EventMethodCode
end;

procedure ListView_SetOnExit(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnExit}
  {$DEFINE EventMethodName := OnExit}
  EventMethodCode
end;

procedure ListView_SetOnDragDrop(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragDrop}
  {$DEFINE EventMethodName := OnDragDrop}
  EventMethodCode
end;

procedure ListView_SetOnDragOver(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragOver}
  {$DEFINE EventMethodName := OnDragOver}
  EventMethodCode
end;

procedure ListView_SetOnInsert(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnInsert}
  {$DEFINE EventMethodName := ListViewOnInsert}
  EventMethodCode
end;

procedure ListView_SetOnKeyDown(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyDown}
  {$DEFINE EventMethodName := OnKeyDown}
  EventMethodCode
end;

procedure ListView_SetOnKeyPress(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyPress}
  {$DEFINE EventMethodName := OnKeyPress}
  EventMethodCode
end;

procedure ListView_SetOnKeyUp(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyUp}
  {$DEFINE EventMethodName := OnKeyUp}
  EventMethodCode
end;

procedure ListView_SetOnMouseDown(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseDown}
  {$DEFINE EventMethodName := OnMouseDown}
  EventMethodCode
end;

procedure ListView_SetOnMouseEnter(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseEnter}
  {$DEFINE EventMethodName := OnMouseEnter}
  EventMethodCode
end;

procedure ListView_SetOnMouseLeave(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseLeave}
  {$DEFINE EventMethodName := OnMouseLeave}
  EventMethodCode
end;

procedure ListView_SetOnMouseMove(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseMove}
  {$DEFINE EventMethodName := OnMouseMove}
  EventMethodCode
end;

procedure ListView_SetOnMouseUp(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseUp}
  {$DEFINE EventMethodName := OnMouseUp}
  EventMethodCode
end;

procedure ListView_SetOnResize(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnResize}
  {$DEFINE EventMethodName := OnResize}
  EventMethodCode
end;

procedure ListView_SetOnSelectItem(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnSelectItem}
  {$DEFINE EventMethodName := ListViewOnSelectItem}
  EventMethodCode
end;

procedure ListView_SetOnItemChecked(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnItemChecked}
  {$DEFINE EventMethodName := ListViewOnItemChecked}
  EventMethodCode
end;

procedure ListView_SetOnStartDock(AObj: TListView; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnStartDock}
  {$DEFINE EventMethodName := OnStartDock}
  EventMethodCode
end;

function ListView_GetCanvas(AObj: TListView): TCanvas; extdecl;
begin
  Result :=  AObj.Canvas;
end;

function ListView_GetItemFocused(AObj: TListView): TListItem; extdecl;
begin
  Result :=  AObj.ItemFocused;
end;

procedure ListView_SetItemFocused(AObj: TListView; AValue: TListItem); extdecl;
begin
  AObj.ItemFocused := AValue;
end;

function ListView_GetSelCount(AObj: TListView): Integer; extdecl;
begin
  Result :=  AObj.SelCount;
end;

function ListView_GetSelected(AObj: TListView): TListItem; extdecl;
begin
  Result :=  AObj.Selected;
end;

procedure ListView_SetSelected(AObj: TListView; AValue: TListItem); extdecl;
begin
  AObj.Selected := AValue;
end;

function ListView_GetTopItem(AObj: TListView): TListItem; extdecl;
begin
  Result :=  AObj.TopItem;
end;

function ListView_GetVisibleRowCount(AObj: TListView): Integer; extdecl;
begin
  Result :=  AObj.VisibleRowCount;
end;

function ListView_GetItemIndex(AObj: TListView): Integer; extdecl;
begin
  Result :=  AObj.ItemIndex;
end;

procedure ListView_SetItemIndex(AObj: TListView; AValue: Integer); extdecl;
begin
  AObj.ItemIndex := AValue;
end;

function ListView_GetDockClientCount(AObj: TListView): Integer; extdecl;
begin
  Result :=  AObj.DockClientCount;
end;

function ListView_GetDockSite(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.DockSite;
end;

procedure ListView_SetDockSite(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.DockSite := AValue;
end;

function ListView_GetVisibleDockClientCount(AObj: TListView): Integer; extdecl;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function ListView_GetBrush(AObj: TListView): TBrush; extdecl;
begin
  Result :=  AObj.Brush;
end;

function ListView_GetControlCount(AObj: TListView): Integer; extdecl;
begin
  Result :=  AObj.ControlCount;
end;

function ListView_GetHandle(AObj: TListView): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

function ListView_GetParentWindow(AObj: TListView): HWND; extdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure ListView_SetParentWindow(AObj: TListView; AValue: HWND); extdecl;
begin
  AObj.ParentWindow := AValue;
end;

function ListView_GetUseDockManager(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.UseDockManager;
end;

procedure ListView_SetUseDockManager(AObj: TListView; AValue: LongBool); extdecl;
begin
  AObj.UseDockManager := AValue;
end;

procedure ListView_GetBoundsRect(AObj: TListView; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure ListView_SetBoundsRect(AObj: TListView; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

function ListView_GetClientHeight(AObj: TListView): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure ListView_SetClientHeight(AObj: TListView; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure ListView_GetClientOrigin(AObj: TListView; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure ListView_GetClientRect(AObj: TListView; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function ListView_GetClientWidth(AObj: TListView): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure ListView_SetClientWidth(AObj: TListView; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function ListView_GetControlState(AObj: TListView): TControlState; extdecl;
begin
  Result :=  AObj.ControlState;
end;

procedure ListView_SetControlState(AObj: TListView; AValue: TControlState); extdecl;
begin
  AObj.ControlState := AValue;
end;

function ListView_GetControlStyle(AObj: TListView): TControlStyle; extdecl;
begin
  Result :=  AObj.ControlStyle;
end;

procedure ListView_SetControlStyle(AObj: TListView; AValue: TControlStyle); extdecl;
begin
  AObj.ControlStyle := AValue;
end;

function ListView_GetFloating(AObj: TListView): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function ListView_GetParent(AObj: TListView): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure ListView_SetParent(AObj: TListView; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function ListView_GetLeft(AObj: TListView): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

procedure ListView_SetLeft(AObj: TListView; AValue: Integer); extdecl;
begin
  AObj.Left := AValue;
end;

function ListView_GetTop(AObj: TListView): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

procedure ListView_SetTop(AObj: TListView; AValue: Integer); extdecl;
begin
  AObj.Top := AValue;
end;

function ListView_GetWidth(AObj: TListView): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure ListView_SetWidth(AObj: TListView; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

function ListView_GetHeight(AObj: TListView): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure ListView_SetHeight(AObj: TListView; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function ListView_GetCursor(AObj: TListView): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure ListView_SetCursor(AObj: TListView; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function ListView_GetHint(AObj: TListView): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure ListView_SetHint(AObj: TListView; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function ListView_GetComponentCount(AObj: TListView): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function ListView_GetComponentIndex(AObj: TListView): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure ListView_SetComponentIndex(AObj: TListView; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function ListView_GetOwner(AObj: TListView): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function ListView_GetName(AObj: TListView): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure ListView_SetName(AObj: TListView; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function ListView_GetTag(AObj: TListView): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure ListView_SetTag(AObj: TListView; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function ListView_GetColumn(AObj: TListView; Index: Integer): TListColumn; extdecl;
begin
  Result :=  AObj.Column[Index];
end;

function ListView_GetDockClients(AObj: TListView; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.DockClients[Index];
end;

function ListView_GetControls(AObj: TListView; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function ListView_GetComponents(AObj: TListView; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function ListView_StaticClassType: TClass; extdecl;
begin
  Result := TListView;
end;

exports
  ListView_Create,
  ListView_Free,
  ListView_AlphaSort,
  ListView_Clear,
  ListView_ClearSelection,
  ListView_DeleteSelected,
  ListView_IsEditing,
  ListView_SelectAll,
  ListView_CustomSort,
  ListView_CanFocus,
  ListView_ContainsControl,
  ListView_ControlAtPos,
  ListView_DisableAlign,
  ListView_EnableAlign,
  ListView_FindChildControl,
  ListView_FlipChildren,
  ListView_Focused,
  ListView_HandleAllocated,
  ListView_InsertControl,
  ListView_Invalidate,
  ListView_RemoveControl,
  ListView_Realign,
  ListView_Repaint,
  ListView_ScaleBy,
  ListView_ScrollBy,
  ListView_SetBounds,
  ListView_SetFocus,
  ListView_Update,
  ListView_BringToFront,
  ListView_ClientToScreen,
  ListView_ClientToParent,
  ListView_Dragging,
  ListView_HasParent,
  ListView_Hide,
  ListView_Perform,
  ListView_Refresh,
  ListView_ScreenToClient,
  ListView_ParentToClient,
  ListView_SendToBack,
  ListView_Show,
  ListView_GetTextBuf,
  ListView_GetTextLen,
  ListView_SetTextBuf,
  ListView_FindComponent,
  ListView_GetNamePath,
  ListView_Assign,
  ListView_ClassType,
  ListView_ClassName,
  ListView_InstanceSize,
  ListView_InheritsFrom,
  ListView_Equals,
  ListView_GetHashCode,
  ListView_ToString,
  ListView_GetAction,
  ListView_SetAction,
  ListView_GetAlign,
  ListView_SetAlign,
  ListView_GetAllocBy,
  ListView_SetAllocBy,
  ListView_GetAnchors,
  ListView_SetAnchors,
  ListView_GetBiDiMode,
  ListView_SetBiDiMode,
  ListView_GetBorderStyle,
  ListView_SetBorderStyle,
  ListView_GetBorderWidth,
  ListView_SetBorderWidth,
  ListView_GetCheckboxes,
  ListView_SetCheckboxes,
  ListView_GetColor,
  ListView_SetColor,
  ListView_GetColumns,
  ListView_SetColumns,
  ListView_GetColumnClick,
  ListView_SetColumnClick,
  ListView_GetDoubleBuffered,
  ListView_SetDoubleBuffered,
  ListView_GetDragCursor,
  ListView_SetDragCursor,
  ListView_GetDragKind,
  ListView_SetDragKind,
  ListView_GetDragMode,
  ListView_SetDragMode,
  ListView_GetEnabled,
  ListView_SetEnabled,
  ListView_GetFont,
  ListView_SetFont,
  ListView_GetFlatScrollBars,
  ListView_SetFlatScrollBars,
  ListView_GetFullDrag,
  ListView_SetFullDrag,
  ListView_GetGridLines,
  ListView_SetGridLines,
  ListView_GetHideSelection,
  ListView_SetHideSelection,
  ListView_GetHotTrack,
  ListView_SetHotTrack,
  ListView_GetIconOptions,
  ListView_SetIconOptions,
  ListView_GetItems,
  ListView_SetItems,
  ListView_GetLargeImages,
  ListView_SetLargeImages,
  ListView_GetMultiSelect,
  ListView_SetMultiSelect,
  ListView_GetOwnerData,
  ListView_SetOwnerData,
  ListView_GetOwnerDraw,
  ListView_SetOwnerDraw,
  ListView_GetReadOnly,
  ListView_SetReadOnly,
  ListView_GetRowSelect,
  ListView_SetRowSelect,
  ListView_GetParentColor,
  ListView_SetParentColor,
  ListView_GetParentFont,
  ListView_SetParentFont,
  ListView_GetParentShowHint,
  ListView_SetParentShowHint,
  ListView_GetPopupMenu,
  ListView_SetPopupMenu,
  ListView_GetShowColumnHeaders,
  ListView_SetShowColumnHeaders,
  ListView_GetShowHint,
  ListView_SetShowHint,
  ListView_GetSmallImages,
  ListView_SetSmallImages,
  ListView_GetSortType,
  ListView_SetSortType,
  ListView_GetStateImages,
  ListView_SetStateImages,
  ListView_GetTabOrder,
  ListView_SetTabOrder,
  ListView_GetTabStop,
  ListView_SetTabStop,
  ListView_GetViewStyle,
  ListView_SetViewStyle,
  ListView_GetVisible,
  ListView_SetVisible,
  ListView_SetOnAdvancedCustomDraw,
  ListView_SetOnAdvancedCustomDrawItem,
  ListView_SetOnAdvancedCustomDrawSubItem,
  ListView_SetOnChange,
  ListView_SetOnClick,
  ListView_SetOnColumnClick,
  ListView_SetOnCompare,
  ListView_SetOnContextPopup,
  ListView_SetOnCustomDraw,
  ListView_SetOnCustomDrawItem,
  ListView_SetOnCustomDrawSubItem,
  ListView_SetOnData,
  ListView_SetOnDataFind,
  ListView_SetOnDblClick,
  ListView_SetOnDeletion,
  ListView_SetOnEdited,
  ListView_SetOnEditing,
  ListView_SetOnEndDock,
  ListView_SetOnEndDrag,
  ListView_SetOnEnter,
  ListView_SetOnExit,
  ListView_SetOnDragDrop,
  ListView_SetOnDragOver,
  ListView_SetOnInsert,
  ListView_SetOnKeyDown,
  ListView_SetOnKeyPress,
  ListView_SetOnKeyUp,
  ListView_SetOnMouseDown,
  ListView_SetOnMouseEnter,
  ListView_SetOnMouseLeave,
  ListView_SetOnMouseMove,
  ListView_SetOnMouseUp,
  ListView_SetOnResize,
  ListView_SetOnSelectItem,
  ListView_SetOnItemChecked,
  ListView_SetOnStartDock,
  ListView_GetCanvas,
  ListView_GetItemFocused,
  ListView_SetItemFocused,
  ListView_GetSelCount,
  ListView_GetSelected,
  ListView_SetSelected,
  ListView_GetTopItem,
  ListView_GetVisibleRowCount,
  ListView_GetItemIndex,
  ListView_SetItemIndex,
  ListView_GetDockClientCount,
  ListView_GetDockSite,
  ListView_SetDockSite,
  ListView_GetVisibleDockClientCount,
  ListView_GetBrush,
  ListView_GetControlCount,
  ListView_GetHandle,
  ListView_GetParentWindow,
  ListView_SetParentWindow,
  ListView_GetUseDockManager,
  ListView_SetUseDockManager,
  ListView_GetBoundsRect,
  ListView_SetBoundsRect,
  ListView_GetClientHeight,
  ListView_SetClientHeight,
  ListView_GetClientOrigin,
  ListView_GetClientRect,
  ListView_GetClientWidth,
  ListView_SetClientWidth,
  ListView_GetControlState,
  ListView_SetControlState,
  ListView_GetControlStyle,
  ListView_SetControlStyle,
  ListView_GetFloating,
  ListView_GetParent,
  ListView_SetParent,
  ListView_GetLeft,
  ListView_SetLeft,
  ListView_GetTop,
  ListView_SetTop,
  ListView_GetWidth,
  ListView_SetWidth,
  ListView_GetHeight,
  ListView_SetHeight,
  ListView_GetCursor,
  ListView_SetCursor,
  ListView_GetHint,
  ListView_SetHint,
  ListView_GetComponentCount,
  ListView_GetComponentIndex,
  ListView_SetComponentIndex,
  ListView_GetOwner,
  ListView_GetName,
  ListView_SetName,
  ListView_GetTag,
  ListView_SetTag,
  ListView_GetColumn,
  ListView_GetDockClients,
  ListView_GetControls,
  ListView_GetComponents,
  ListView_StaticClassType;

