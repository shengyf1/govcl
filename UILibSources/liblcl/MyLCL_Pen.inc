
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function Pen_Create: TPen; extdecl;
begin
  Result :=  TPen.Create;
end;

procedure Pen_Free(AObj: TPen); extdecl;
begin
  AObj.Free;
end;

procedure Pen_Assign(AObj: TPen; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function Pen_GetNamePath(AObj: TPen): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

function Pen_ClassType(AObj: TPen): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function Pen_ClassName(AObj: TPen): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function Pen_InstanceSize(AObj: TPen): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function Pen_InheritsFrom(AObj: TPen; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function Pen_Equals(AObj: TPen; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Pen_GetHashCode(AObj: TPen): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Pen_ToString(AObj: TPen): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function Pen_GetHandle(AObj: TPen): HPEN; extdecl;
begin
  Result :=  AObj.Handle;
end;

procedure Pen_SetHandle(AObj: TPen; AValue: HPEN); extdecl;
begin
  AObj.Handle := AValue;
end;

function Pen_GetColor(AObj: TPen): TColor; extdecl;
begin
  Result :=  AObj.Color;
end;

procedure Pen_SetColor(AObj: TPen; AValue: TColor); extdecl;
begin
  AObj.Color := AValue;
end;

function Pen_GetMode(AObj: TPen): TPenMode; extdecl;
begin
  Result :=  AObj.Mode;
end;

procedure Pen_SetMode(AObj: TPen; AValue: TPenMode); extdecl;
begin
  AObj.Mode := AValue;
end;

function Pen_GetStyle(AObj: TPen): TPenStyle; extdecl;
begin
  Result :=  AObj.Style;
end;

procedure Pen_SetStyle(AObj: TPen; AValue: TPenStyle); extdecl;
begin
  AObj.Style := AValue;
end;

function Pen_GetWidth(AObj: TPen): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure Pen_SetWidth(AObj: TPen; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

procedure Pen_SetOnChange(AObj: TPen; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnChange}
  {$DEFINE EventMethodName := OnChange}
  EventMethodCode
end;

function Pen_StaticClassType: TClass; extdecl;
begin
  Result := TPen;
end;

exports
  Pen_Create,
  Pen_Free,
  Pen_Assign,
  Pen_GetNamePath,
  Pen_ClassType,
  Pen_ClassName,
  Pen_InstanceSize,
  Pen_InheritsFrom,
  Pen_Equals,
  Pen_GetHashCode,
  Pen_ToString,
  Pen_GetHandle,
  Pen_SetHandle,
  Pen_GetColor,
  Pen_SetColor,
  Pen_GetMode,
  Pen_SetMode,
  Pen_GetStyle,
  Pen_SetStyle,
  Pen_GetWidth,
  Pen_SetWidth,
  Pen_SetOnChange,
  Pen_StaticClassType;

