var WiseTracker = {
    
    /** returnValue **/
    wtRetVal:function(returnValue){
        return returnValue;
    },
    /** endStartPage **/
    endStartPage:function(key){
        var messgeToPost = {"function":"endStartPage", "key":key};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** sendTransaction **/
    sendTransaction:function(){
        var messgeToPost = {"function":"sendTransaction"};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** setAdChannel **/
    setAdChannel:function(code){
        var messgeToPost = {"function":"setAdChannel", "code":code};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setAdChannelPeriod:function(code, period){
        var messgeToPost = {"function":"setAdChannelPeriod", "code":code, "period":period};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** setAdCampaign **/
    setAdCampaign:function(code){
        var messgeToPost = {"function":"setAdCampaign", "code":code};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setAdCampaignPeriod:function(code, period){
        var messgeToPost = {"function":"setAdCampaignPeriod", "code":code, "period":period};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** setAdKeyword **/
    setAdKeyword:function(code){
        var messgeToPost = {"function":"setAdKeyword", "code":code};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setAdKeywordPeriod:function(code, period){
        var messgeToPost = {"function":"setAdKeywordPeriod", "code":code, "period":period};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** setAdType **/
    setAdType:function(code){
        var messgeToPost = {"function":"setAdType", "code":code};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setAdTypePeriod:function(code, period){
        var messgeToPost = {"function":"setAdTypePeriod", "code":code, "period":period};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** setGoal **/
    setGoal:function(key, value){
        var messgeToPost = {"function":"setGoal", "key":key, "value":value};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalById:function(pageId,key,value){
        var messgeToPost = {"function":"setGoalById","pageId":pageId, "key":key, "value":value};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** setAcceptPushReceived **/
    setAcceptPushReceived:function(isAccept){
        var messgeToPost = {"function":"setAcceptPushReceived", "isAccept":isAccept};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setAcceptPushReceivedById:function(pageId,isAccept){
        var messgeToPost = {"function":"setAcceptPushReceivedById","pageId":pageId, "isAccept":isAccept};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** setMember **/
    setMember:function(isMember){
        var messgeToPost = {"function":"setMember", "isMember":isMember};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** setGender **/
    setGender:function(gender){
        var messgeToPost = {"function":"setGender", "gender":gender};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** setAge **/
    setAge:function(age){
        var messgeToPost = {"function":"setAge", "age":age};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** setUserAttribute **/
    setUserAttribute:function(key,value){
        var messgeToPost = {"function":"setUserAttribute","key":key, "value":value};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** setContents **/
    setContents:function(cont){
        var messgeToPost = {"function":"setContents", "cont":cont};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setContentsById:function(pageId,cont){
        var messgeToPost = {"function":"setContentsById","pageId":pageId, "cont":cont};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** setPageIdentity **/
    setPageIdentity:function(pi){
        var messgeToPost = {"function":"setPageIdentity", "pi":pi};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setPageIdentityById:function(pageId,pi){
        var messgeToPost = {"function":"setPageIdentityById","pageId":pageId, "pi":pi};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** setSearchKeyword **/
    setSearchKeyword:function(ikwd){
        var messgeToPost = {"function":"setSearchKeyword", "ikwd":ikwd};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalSearchKeyword:function(ikwd){
        var messgeToPost = {"function":"setGoalSearchKeyword","ikwd":ikwd};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderSearchKeyword:function(ikwd){
        var messgeToPost = {"function":"setOrderSearchKeyword","ikwd":ikwd};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderSearchKeywordArray:function(ikwd){
        var messgeToPost = {"function":"setOrderSearchKeywordArray","ikwd":ikwd};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    
    useIkwdWithConversion:function(target){
        var messgeToPost = {"function":"useIkwdWithConversion","target":target};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    useMvt1WithConversion:function(target){
        var messgeToPost = {"function":"useMvt1WithConversion","target":target};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    useMvt2WithConversion:function(target){
        var messgeToPost = {"function":"useMvt2WithConversion","target":target};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    useMvt3WithConversion:function(target){
        var messgeToPost = {"function":"useMvt3WithConversion","target":target};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    
    setSearchKeywordById:function(pageId,ikwd){
        var messgeToPost = {"function":"setSearchKeywordById","pageId":pageId, "ikwd":ikwd};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** setSearchKeywordResult **/
    setSearchKeywordResult:function(ikwdCnt){
        var messgeToPost = {"function":"setSearchKeywordResult", "ikwdCnt":ikwdCnt};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setSearchKeywordResultById:function(pageId,ikwdCnt){
        var messgeToPost = {"function":"setSearchKeywordResultById","pageId":pageId, "ikwdCnt":ikwdCnt};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** setSearchKeywordCategory **/
    setSearchKeywordCategory:function(ikwdCat){
        var messgeToPost = {"function":"setSearchKeywordCategory", "ikwdCat":ikwdCat};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setSearchKeywordCategoryById:function(pageId,ikwdCat){
        var messgeToPost = {"function":"setSearchKeywordCategoryById","pageId":pageId, "ikwdCat":ikwdCat};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** mvt **/
    setCustomMvtTag:function(key,mvt){
        var messgeToPost = {"function":"setCustomMvtTag","key":key, "mvt":mvt};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setCustomMvtTagById:function(pageId,key,mvt){
        var messgeToPost = {"function":"setCustomMvtTagById","pageId":pageId, "key":key, "mvt":mvt};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalCustomMvtTag:function(key,mvt){
        var messgeToPost = {"function":"setGoalCustomMvtTag","key":key, "mvt":mvt};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalCustomMvtTagById:function(pageId,key,mvt){
        var messgeToPost = {"function":"setGoalCustomMvtTagById","pageId":pageId, "key":key, "mvt":mvt};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderCustomMvtTag:function(key,mvt){
        var messgeToPost = {"function":"setOrderCustomMvtTag","key":key, "mvt":mvt};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderCustomMvtTagArray:function(key,mvt){
        var messgeToPost = {"function":"setOrderCustomMvtTagArray","key":key, "mvt":mvt};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderCustomMvtTagById:function(pageId,key,mvt){
        var messgeToPost = {"function":"setOrderCustomMvtTagById","pageId":pageId, "key":key, "mvt":mvt};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** exhibit **/
    setExhibit:function(exhibit){
        var messgeToPost = {"function":"setExhibit","exhibit":exhibit};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** order number **/
    setOrderNo:function(ordNo){
        var messgeToPost = {"function":"setOrderNo", "ordNo":ordNo};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderNoById:function(pageId,ordNo){
        var messgeToPost = {"function":"setOrderNoById","pageId":pageId, "ordNo":ordNo};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    
    /** product **/
    setProduct:function(pnc,pncNm){
        var messgeToPost = {"function":"setProduct", "pnc":pnc, "pncNm":pncNm};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setProductById:function(pageId,pnc,pncNm){
        var messgeToPost = {"function":"setProductById","pageId":pageId, "pnc":pnc, "pncNm":pncNm};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** setGoalPageIdentity **/
    setGoalPageIdentity:function(pi){
        var messgeToPost = {"function":"setGoalPageIdentity", "pi":pi};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalPageIdentityById:function(pageId,pi){
        var messgeToPost = {"function":"setGoalPageIdentityById","pageId":pageId, "pi":pi};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalProduct:function(pnc){
        var messgeToPost = {"function":"setGoalProduct", "pnc":pnc};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalProductById:function(pageId,pnc){
        var messgeToPost = {"function":"setGoalProductById","pageId":pageId, "pnc":pnc};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalProductArray:function(pnc){
        var messgeToPost = {"function":"setGoalProductArray", "pnc":pnc};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalProductArrayById:function(pageId,pnc){
        var messgeToPost = {"function":"setGoalProductArrayById","pageId":pageId, "pnc":pnc};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalContents:function(cp){
        var messgeToPost = {"function":"setGoalContents", "cp":cp};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalContentsById:function(pageId,cp){
        var messgeToPost = {"function":"setGoalContentsById","pageId":pageId, "cp":cp};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalContentsArray:function(cp){
        var messgeToPost = {"function":"setGoalContentsArray", "cp":cp};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalContentsArrayById:function(pageId,cp){
        var messgeToPost = {"function":"setGoalContentsArrayById","pageId":pageId, "cp":cp};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderNPaymentId:function(value){
        var messgeToPost = {"function":"setOrderNPaymentId", "value":value};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderNPaymentIdById:function(pageId,value){
        var messgeToPost = {"function":"setOrderNPaymentIdById","pageId":pageId, "value":value};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    createNPaySequenceKey:function(){
        var messgeToPost = {"function":"createNPaySequenceKey"};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    executeCallbackWithNPayKey:function(callback){
        var messgeToPost = {"function":"executeCallbackWithNPayKey", "callback":callback};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderProduct:function(pnc){
        var messgeToPost = {"function":"setOrderProduct", "pnc":pnc};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderProductById:function(pageId,pnc){
        var messgeToPost = {"function":"setOrderProductById","pageId":pageId, "pnc":pnc};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderProductArray:function(pnc){
        var messgeToPost = {"function":"setOrderProductArray", "pnc":pnc};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderProductArrayById:function(pageId,pnc){
        var messgeToPost = {"function":"setOrderProductArrayById","pageId":pageId, "pnc":pnc};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    
    setOrderContents:function(cp){
        var messgeToPost = {"function":"setOrderContents", "cp":cp};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderContentsById:function(pageId,cp){
        var messgeToPost = {"function":"setOrderContentsById","pageId":pageId, "cp":cp};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderContentsArray:function(cp){
        var messgeToPost = {"function":"setOrderContentsArray", "cp":cp};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderContentsArrayById:function(pageId,cp){
        var messgeToPost = {"function":"setOrderContentsArrayById","pageId":pageId, "cp":cp};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    
    /** product category **/
    setProductCategory:function(png,pngNm){
        var messgeToPost = {"function":"setProductCategory", "png":png, "pngNm":pngNm};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setProductCategoryById:function(pageId,png,pngNm){
        var messgeToPost = {"function":"setProductCategoryById","pageId":pageId, "png":png, "pngNm":pngNm};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalProductCategory:function(png){
        var messgeToPost = {"function":"setGoalProductCategory", "png":png};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalProductCategoryById:function(pageId,png){
        var messgeToPost = {"function":"setGoalProductCategoryById","pageId":pageId, "png":png};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalProductCategoryArray:function(png){
        var messgeToPost = {"function":"setGoalProductCategoryArray", "png":png};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalProductCategoryArrayById:function(pageId,png){
        var messgeToPost = {"function":"setGoalProductCategoryArrayById","pageId":pageId, "png":png};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderProductCategory:function(png){
        var messgeToPost = {"function":"setOrderProductCategory", "png":png};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderProductCategoryById:function(pageId,png){
        var messgeToPost = {"function":"setOrderProductCategoryById","pageId":pageId, "png":png};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderProductCategoryArray:function(png){
        var messgeToPost = {"function":"setOrderProductCategoryArray", "png":png};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderProductCategoryArrayById:function(pageId,png){
        var messgeToPost = {"function":"setOrderProductCategoryArrayById","pageId":pageId, "png":png};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    
    /** product type **/
    setProductType:function(pncTp){
        var messgeToPost = {"function":"setProductType", "pncTp":pncTp};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setProductTypeById:function(pageId,pncTp){
        var messgeToPost = {"function":"setProductTypeById","pageId":pageId, "pncTp":pncTp};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalProductType:function(pncTp){
        var messgeToPost = {"function":"setGoalProductType", "pncTp":pncTp};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalProductTypeById:function(pageId,pncTp){
        var messgeToPost = {"function":"setGoalProductTypeById","pageId":pageId, "pncTp":pncTp};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalProductTypeArray:function(pncTp){
        var messgeToPost = {"function":"setGoalProductTypeArray", "pncTp":pncTp};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalProductTypeArrayById:function(pageId,pncTp){
        var messgeToPost = {"function":"setGoalProductTypeArrayById","pageId":pageId, "pncTp":pncTp};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderProductType:function(pncTp){
        var messgeToPost = {"function":"setOrderProductType", "pncTp":pncTp};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderProductTypeById:function(pageId,pncTp){
        var messgeToPost = {"function":"setOrderProductTypeById","pageId":pageId, "pncTp":pncTp};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderProductTypeArray:function(pncTp){
        var messgeToPost = {"function":"setOrderProductTypeArray", "pncTp":pncTp};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderProductTypeArrayById:function(pageId,pncTp){
        var messgeToPost = {"function":"setOrderProductTypeArrayById","pageId":pageId, "pncTp":pncTp};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    
    /** amount **/
    setOrderAmount:function(amount){
        var messgeToPost = {"function":"setOrderAmount", "amount":amount};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderAmountById:function(pageId,amount){
        var messgeToPost = {"function":"setOrderAmountById","pageId":pageId, "amount":amount};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderAmountArray:function(amount){
        var messgeToPost = {"function":"setOrderAmountArray", "amount":amount};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderAmountArrayById:function(pageId,amount){
        var messgeToPost = {"function":"setOrderAmountArrayById","pageId":pageId, "amount":amount};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    
    /** Order Goal **/
    setOrderConversionData:function(key,amount){
        var messgeToPost = {"function":"setOrderConversionData", "key":key, "amount":amount};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderConversionDataById:function(key,pageId,amount){
        var messgeToPost = {"function":"setOrderConversionDataById", "key":key, "pageId":pageId, "amount":amount};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderConversionDataArray:function(key,amount){
        var messgeToPost = {"function":"setOrderConversionDataArray", "key":key, "amount":amount};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderConversionDataArrayById:function(key,pageId,amount){
        var messgeToPost = {"function":"setOrderConversionDataArrayById", "key":key, "pageId":pageId, "amount":amount};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setInternalEvent:function(icmp){
        var messgeToPost = {"function":"setInternalEvent", "icmp":icmp};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    
    /** Quantity **/
    setOrderQuantity:function(quantity){
        var messgeToPost = {"function":"setOrderQuantity", "quantity":quantity};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderQuantityById:function(pageId,quantity){
        var messgeToPost = {"function":"setOrderQuantityById","pageId":pageId, "quantity":quantity};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderQuantityArray:function(quantity){
        var messgeToPost = {"function":"setOrderQuantityArray", "quantity":quantity};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderQuantityArrayById:function(pageId,quantity){
        var messgeToPost = {"function":"setOrderQuantityArrayById","pageId":pageId, "quantity":quantity};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** click event **/
    sendClickData:function(eventCode, eventName){
        var messgeToPost = {"function":"sendClickData","eventCode":eventCode, "eventName":eventName};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /** sendTransaction **/
    sendGoalData:function(){
        var messgeToPost = {"function":"sendGoalData"};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    /**
     Customization function
     **/
    setPaymentTypeForOllehTv:function(mCd,sCd){
        var messgeToPost = {"function":"setPaymentTypeForOllehTv","mCd":mCd, "sCd":sCd};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },

    /**
     * pncSubTp2 Api
     **/
    
    setGoalProductType2:function(type){
        var messgeToPost = {"function":"setGoalProductType2", "type":type};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalProductTypeArray2:function(type){
        var messgeToPost = {"function":"setGoalProductTypeArray2", "type":type};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setProductType2:function(type){
        var messgeToPost = {"function":"setProductType2", "type":type};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderProductType2:function(type){
        var messgeToPost = {"function":"setOrderProductType2", "type":type};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderProductTypeArray2:function(type){
        var messgeToPost = {"function":"setOrderProductTypeArray2", "type":type};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    
    /**
     * pncSubTp3 Api
     **/
    setGoalProductType3:function(type){
        var messgeToPost = {"function":"setGoalProductType3", "type":type};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalProductTypeArray3:function(type){
        var messgeToPost = {"function":"setGoalProductTypeArray3", "type":type};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setProductType3:function(type){
        var messgeToPost = {"function":"setProductType3", "type":type};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderProductType3:function(type){
        var messgeToPost = {"function":"setOrderProductType3", "type":type};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderProductTypeArray3:function(type){
        var messgeToPost = {"function":"setOrderProductTypeArray3", "type":type};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    
    /**
     * pncSubTp4 Api
     **/
    setGoalProductType4:function(type){
        var messgeToPost = {"function":"setGoalProductType4", "type":type};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalProductTypeArray4:function(type){
        var messgeToPost = {"function":"setGoalProductTypeArray4", "type":type};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setProductType4:function(type){
        var messgeToPost = {"function":"setProductType4", "type":type};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderProductType4:function(type){
        var messgeToPost = {"function":"setOrderProductType4", "type":type};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderProductTypeArray4:function(type){
        var messgeToPost = {"function":"setOrderProductTypeArray4", "type":type};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    
    /**
     * pncSubTp4 Api
     **/
    setGoalProductType5:function(type){
        var messgeToPost = {"function":"setGoalProductType5", "type":type};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setGoalProductTypeArray5:function(type){
        var messgeToPost = {"function":"setGoalProductTypeArray5", "type":type};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setProductType5:function(type){
        var messgeToPost = {"function":"setProductType5", "type":type};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderProductType5:function(type){
        var messgeToPost = {"function":"setOrderProductType5", "type":type};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    setOrderProductTypeArray5:function(type){
        var messgeToPost = {"function":"setOrderProductTypeArray5", "type":type};
        window.webkit.messageHandlers.WiseTracker.postMessage(messgeToPost);
    },
    
    /** constant list **/
    PRODUCT_SUB_TYPE1:"TYPE1",
    PRODUCT_SUB_TYPE2:"TYPE2",
    PRODUCT_SUB_TYPE3:"TYPE3",
    PRODUCT_SUB_TYPE4:"TYPE4",
    PRODUCT_SUB_TYPE5:"TYPE5",
    PRODUCT_SUB_TYPE6:"TYPE6",
    PRODUCT_SUB_TYPE7:"TYPE7",
    PRODUCT_SUB_TYPE8:"TYPE8",
    PRODUCT_SUB_TYPE9:"TYPE9",
    MEMBER:"Y",
    MEMBER_LEVEL:"memLvl",
    MEMBER_CODE:"memCd",
    NON_MEMBER:"N",
    GENDER_MALE:"M",
    GENDER_FEMALE:"F",
    GENDER_ETC:"U",
    AGE_0_TO_9:"A",
    AGE_10_TO_19:"B",
    AGE_20_TO_29:"C",
    AGE_30_TO_39:"D",
    AGE_40_TO_49:"E",
    AGE_50_TO_59:"F",
    AGE_60_OVER:"G",
    GOAL_1:"g1",
    GOAL_2:"g2",
    GOAL_3:"g3",
    GOAL_4:"g4",
    GOAL_5:"g5",
    GOAL_6:"g6",
    GOAL_7:"g7",
    GOAL_8:"g8",
    GOAL_9:"g9",
    GOAL_10:"g10",
    GOAL_11:"g11",
    GOAL_12:"g12",
    GOAL_13:"g13",
    GOAL_14:"g14",
    GOAL_15:"g15",
    GOAL_16:"g16",
    GOAL_17:"g17",
    GOAL_18:"g18",
    GOAL_19:"g19",
    GOAL_20:"g20",
    GOAL_21:"g21",
    GOAL_22:"g22",
    GOAL_23:"g23",
    GOAL_24:"g24",
    GOAL_25:"g25",
    GOAL_26:"g26",
    GOAL_27:"g27",
    GOAL_28:"g28",
    PUSH_ACCEPT:"g30",
    CUSTOM_MVT_TAG_1:"mvt1",
    CUSTOM_MVT_TAG_2:"mvt2",
    CUSTOM_MVT_TAG_3:"mvt3",
    USER_ATTRIBUTE_1:"uvp1",
    USER_ATTRIBUTE_2:"uvp2",
    USER_ATTRIBUTE_3:"uvp3",
    USER_ATTRIBUTE_4:"uvp4",
    USER_ATTRIBUTE_5:"uvp5",
    USER_ATTRIBUTE_6:"memLvl",
    USER_ATTRIBUTE_7:"memCd",
    USER_ID:"userId",
    NPAY_KEY:"",
    NPAY_KEY_TMP:""
};
