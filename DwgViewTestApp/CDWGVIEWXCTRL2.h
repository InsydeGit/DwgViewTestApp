#pragma once

// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated
// by Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////

#include "afxwin.h"

class CDWGVIEWXCTRL2 : public CWnd
{
protected:
	DECLARE_DYNCREATE(CDWGVIEWXCTRL2)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= {0xac53efe4,0x94a7,0x47e6,{0xbb,0xfc,0xe9,0xb9,0xcf,0x32,0x22,0x99}};
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
						const RECT& rect, CWnd* pParentWnd, UINT nID, 
						CCreateContext* pContext = nullptr)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID);
	}

	BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd,
				UINT nID, CFile* pPersist = nullptr, BOOL bStorage = FALSE,
				BSTR bstrLicKey = nullptr)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); 
	}

// Attributes
public:


// Operations
public:
// _DDwgViewX

// Functions
//

	void SetDwgFile(LPCTSTR szFileName)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1A, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, szFileName);
	}
	void ZoomAll()
	{
		InvokeHelper(0x1B, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void ZoomIn()
	{
		InvokeHelper(0x1C, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void ZoomOut()
	{
		InvokeHelper(0x1D, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void Pan(short nXoffset, short nYoffset)
	{
		static BYTE parms[] = VTS_I2 VTS_I2;
		InvokeHelper(0x1E, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, nXoffset, nYoffset);
	}
	void ZoomWindow(short nXLeft, short nYTop, short nXRight, short nYBottom)
	{
		static BYTE parms[] = VTS_I2 VTS_I2 VTS_I2 VTS_I2;
		InvokeHelper(0x1F, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, nXLeft, nYTop, nXRight, nYBottom);
	}
	void ZoomRectByMouse()
	{
		InvokeHelper(0x20, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void PanByMouse()
	{
		InvokeHelper(0x21, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void Print()
	{
		InvokeHelper(0x22, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void Rotate(float dAngle)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x23, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, dAngle);
	}
	void Layer()
	{
		InvokeHelper(0x24, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	CString GetLastError()
	{
		CString result;
		InvokeHelper(0x25, DISPATCH_METHOD, VT_BSTR, (void*)&result, nullptr);
		return result;
	}
	void PrintA()
	{
		InvokeHelper(0x26, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void SetPrintArea(short nFromX, short nFromY, short nToX, short nToY)
	{
		static BYTE parms[] = VTS_I2 VTS_I2 VTS_I2 VTS_I2;
		InvokeHelper(0x27, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, nFromX, nFromY, nToX, nToY);
	}
	void SetAllPenWidth(double dPenWidth)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x28, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, dPenWidth);
	}
	void SetPenWidth(short nColorIndex, double dPenWidth)
	{
		static BYTE parms[] = VTS_I2 VTS_R8;
		InvokeHelper(0x29, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, nColorIndex, dPenWidth);
	}
	void ZoomWinDrawingUnit(double dLTx, double dLTy, double dLTz, double dRBx, double dRBy, double dRBz)
	{
		static BYTE parms[] = VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8;
		InvokeHelper(0x2A, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, dLTx, dLTy, dLTz, dRBx, dRBy, dRBz);
	}
	void LoadMarkupFile(LPCTSTR szMarkupFile)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x2B, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, szMarkupFile);
	}
	void SaveMarkupFile(LPCTSTR szMarkupFile)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x2C, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, szMarkupFile);
	}
	void Measure()
	{
		InvokeHelper(0x2D, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void Area()
	{
		InvokeHelper(0x2E, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void MarkerRedLine()
	{
		InvokeHelper(0x2F, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void MarkerText()
	{
		InvokeHelper(0x30, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void MarkerRect()
	{
		InvokeHelper(0x31, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void MarkerCircleRect()
	{
		InvokeHelper(0x32, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void MarkerEllipse()
	{
		InvokeHelper(0x33, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void MarkerCound()
	{
		InvokeHelper(0x34, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void DelAllMarkup()
	{
		InvokeHelper(0x35, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void AddFontPath(LPCTSTR strFontPath)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x36, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, strFontPath);
	}
	short ExtractBlockAttByWindow()
	{
		short result;
		InvokeHelper(0x37, DISPATCH_METHOD, VT_I2, (void*)&result, nullptr);
		return result;
	}
	void SetCurBlockIndex(short nBlockIndex)
	{
		static BYTE parms[] = VTS_I2;
		InvokeHelper(0x38, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, nBlockIndex);
	}
	short GetCurBlockDataValuebyIndex(short nValueIndex, BSTR * szTag, BSTR * szValue)
	{
		short result;
		static BYTE parms[] = VTS_I2 VTS_UNKNOWN VTS_UNKNOWN;
		InvokeHelper(0x39, DISPATCH_METHOD, VT_I2, (void*)&result, parms, nValueIndex, szTag, szValue);
		return result;
	}
	CString get_CurBlkTagByIndex(short nIndex)
	{
		CString result;
		static BYTE parms[] = VTS_I2;
		InvokeHelper(0x43, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms, nIndex);
		return result;
	}
	void put_CurBlkTagByIndex(short nIndex, LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_I2 VTS_BSTR;
		InvokeHelper(0x43, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}
	CString get_CurBlkValueByIndex(short nIndex)
	{
		CString result;
		static BYTE parms[] = VTS_I2;
		InvokeHelper(0x44, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms, nIndex);
		return result;
	}
	void put_CurBlkValueByIndex(short nIndex, LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_I2 VTS_BSTR;
		InvokeHelper(0x44, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}
	void SetTrueTextFill(short bFillText)
	{
		static BYTE parms[] = VTS_I2;
		InvokeHelper(0x3A, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, bFillText);
	}
	void SelectEntityBegin()
	{
		InvokeHelper(0x3B, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void ClearSelectEnitities()
	{
		InvokeHelper(0x3C, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	CString GetHandleByIndex(short nIndex)
	{
		CString result;
		static BYTE parms[] = VTS_I2;
		InvokeHelper(0x3D, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, nIndex);
		return result;
	}
	void SelectEntityEnd()
	{
		InvokeHelper(0x3E, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void SelectEntityBegin2()
	{
		InvokeHelper(0x3F, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void SelectEntityEnd2()
	{
		InvokeHelper(0x40, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void ZoombyEnt()
	{
		InvokeHelper(0x41, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	short AppendSelectedEnt(LPCTSTR EntHandle)
	{
		short result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x42, DISPATCH_METHOD, VT_I2, (void*)&result, parms, EntHandle);
		return result;
	}
	short SetViewArea(double dFirX, double dFirY, double dFirZ, double dSecX, double dSecY, double dSecZ)
	{
		short result;
		static BYTE parms[] = VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_R8;
		InvokeHelper(0x45, DISPATCH_METHOD, VT_I2, (void*)&result, parms, dFirX, dFirY, dFirZ, dSecX, dSecY, dSecZ);
		return result;
	}
	void SetRegCode(LPCTSTR szRegCode)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x46, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, szRegCode);
	}
	short ReadFileBuffer(unsigned char * pBuffer, long nFileSize)
	{
		short result;
		static BYTE parms[] = VTS_UNKNOWN VTS_I4;
		InvokeHelper(0x47, DISPATCH_METHOD, VT_I2, (void*)&result, parms, pBuffer, nFileSize);
		return result;
	}
	short InputArray(VARIANT vData)
	{
		short result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x48, DISPATCH_METHOD, VT_I2, (void*)&result, parms, &vData);
		return result;
	}
	short InputArray2(VARIANT vData, unsigned __int64 nFileSize)
	{
		short result;
		static BYTE parms[] = VTS_VARIANT VTS_UNKNOWN;
		InvokeHelper(0x49, DISPATCH_METHOD, VT_I2, (void*)&result, parms, &vData, nFileSize);
		return result;
	}
	void AboutBox()
	{
		InvokeHelper(0xFFFFFDD8, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	void EditAtt()
	{
		InvokeHelper(0x4A, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	CString GetBlkVal(LPCTSTR szBlkName, LPCTSTR szTag)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x4B, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, szBlkName, szTag);
		return result;
	}
	CString GetMetaData(LPCTSTR szFiled)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x4C, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, szFiled);
		return result;
	}
	short SetMetaData(LPCTSTR szField, LPCTSTR szValue)
	{
		short result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x4D, DISPATCH_METHOD, VT_I2, (void*)&result, parms, szField, szValue);
		return result;
	}
	void Save()
	{
		InvokeHelper(0x4E, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}
	short PreLayout()
	{
		short result;
		InvokeHelper(0x4F, DISPATCH_METHOD, VT_I2, (void*)&result, nullptr);
		return result;
	}
	short NextLayout()
	{
		short result;
		InvokeHelper(0x50, DISPATCH_METHOD, VT_I2, (void*)&result, nullptr);
		return result;
	}
// _DDwgViewXEvents

// Functions
//

	void MouseDown(short Button, short Shift, long x, long y)
	{
		static BYTE parms[] = VTS_I2 VTS_I2 VTS_I4 VTS_I4;
		InvokeHelper(0xFFFFFDA3, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, Button, Shift, x, y);
	}
	void MouseUp(short Button, short Shift, long x, long y)
	{
		static BYTE parms[] = VTS_I2 VTS_I2 VTS_I4 VTS_I4;
		InvokeHelper(0xFFFFFDA1, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, Button, Shift, x, y);
	}


};
