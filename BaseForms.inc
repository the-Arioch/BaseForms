{$i jedi.inc}

{$ifdef DELPHI2010_UP}
  {$define TCustomForm.InitializeNewForm}
  {$define Controls.TMargins}
  {$define Controls.TPadding}
{$endif}

{$define DataModule.AllowAutoFree}
{$define Form.AllowAutoFree}
{$define Frame.AllowAutoFree}


// Allow use .OnLocalize event and ResGet Method
{-$define Allow.Localization}

{$define Allow.ScaleFix}


// define, if using tb2k components
{.$define bf_tb2k}