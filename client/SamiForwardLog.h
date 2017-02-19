/*
 * SamiForwardLog.h
 * 
 * 
 */

#ifndef SamiForwardLog_H_
#define SamiForwardLog_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiObject.h"
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiForwardLog: public SamiObject {
public:
    SamiForwardLog();
    SamiForwardLog(String* json);
    virtual ~SamiForwardLog();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiForwardLog* fromJson(String* obj);

    Long* getPEndDate();
    void setPEndDate(Long* pEnd_date);
    String* getPErrorMsg();
    void setPErrorMsg(String* pError_msg);
    Integer* getPHttpStatusCode();
    void setPHttpStatusCode(Integer* pHttp_status_code);
    String* getPId();
    void setPId(String* pId);
    SamiObject* getPPayload();
    void setPPayload(SamiObject* pPayload);
    String* getPResponse();
    void setPResponse(String* pResponse);
    Integer* getPRetryCount();
    void setPRetryCount(Integer* pRetry_count);
    Long* getPStartDate();
    void setPStartDate(Long* pStart_date);
    String* getPUrl();
    void setPUrl(String* pUrl);

private:
    Long* pEnd_date;
String* pError_msg;
Integer* pHttp_status_code;
String* pId;
SamiObject* pPayload;
String* pResponse;
Integer* pRetry_count;
Long* pStart_date;
String* pUrl;
};

} /* namespace Swagger */

#endif /* SamiForwardLog_H_ */
