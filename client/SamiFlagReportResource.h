/*
 * SamiFlagReportResource.h
 * 
 * 
 */

#ifndef SamiFlagReportResource_H_
#define SamiFlagReportResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiFlagReportResource: public SamiObject {
public:
    SamiFlagReportResource();
    SamiFlagReportResource(String* json);
    virtual ~SamiFlagReportResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiFlagReportResource* fromJson(String* obj);

    String* getPContext();
    void setPContext(String* pContext);
    String* getPContextId();
    void setPContextId(String* pContext_id);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    Long* getPId();
    void setPId(Long* pId);
    String* getPReason();
    void setPReason(String* pReason);
    String* getPResolution();
    void setPResolution(String* pResolution);
    Long* getPResolved();
    void setPResolved(Long* pResolved);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    String* pContext;
String* pContext_id;
Long* pCreated_date;
Long* pId;
String* pReason;
String* pResolution;
Long* pResolved;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiFlagReportResource_H_ */
