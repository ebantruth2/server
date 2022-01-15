// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_MOB_SKILLS_H
#define XIDB_MOB_SKILLS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace MobSkills_
  {
    struct MobSkillId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mob_skill_id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mobSkillId;
            T& operator()() { return mobSkillId; }
            const T& operator()() const { return mobSkillId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct MobAnimId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mob_anim_id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mobAnimId;
            T& operator()() { return mobAnimId; }
            const T& operator()() const { return mobAnimId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct MobSkillName
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mob_skill_name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mobSkillName;
            T& operator()() { return mobSkillName; }
            const T& operator()() const { return mobSkillName; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::can_be_null>;
    };
    struct MobSkillAoe
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mob_skill_aoe";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mobSkillAoe;
            T& operator()() { return mobSkillAoe; }
            const T& operator()() const { return mobSkillAoe; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct MobSkillDistance
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mob_skill_distance";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mobSkillDistance;
            T& operator()() { return mobSkillDistance; }
            const T& operator()() const { return mobSkillDistance; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct MobAnimTime
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mob_anim_time";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mobAnimTime;
            T& operator()() { return mobAnimTime; }
            const T& operator()() const { return mobAnimTime; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct MobPrepareTime
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mob_prepare_time";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mobPrepareTime;
            T& operator()() { return mobPrepareTime; }
            const T& operator()() const { return mobPrepareTime; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct MobValidTargets
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mob_valid_targets";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mobValidTargets;
            T& operator()() { return mobValidTargets; }
            const T& operator()() const { return mobValidTargets; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct MobSkillFlag
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mob_skill_flag";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mobSkillFlag;
            T& operator()() { return mobSkillFlag; }
            const T& operator()() const { return mobSkillFlag; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct MobSkillParam
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mob_skill_param";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mobSkillParam;
            T& operator()() { return mobSkillParam; }
            const T& operator()() const { return mobSkillParam; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct Knockback
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "knockback";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T knockback;
            T& operator()() { return knockback; }
            const T& operator()() const { return knockback; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint>;
    };
    struct PrimarySc
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "primary_sc";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T primarySc;
            T& operator()() { return primarySc; }
            const T& operator()() const { return primarySc; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint>;
    };
    struct SecondarySc
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "secondary_sc";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T secondarySc;
            T& operator()() { return secondarySc; }
            const T& operator()() const { return secondarySc; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint>;
    };
    struct TertiarySc
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "tertiary_sc";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T tertiarySc;
            T& operator()() { return tertiarySc; }
            const T& operator()() const { return tertiarySc; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint>;
    };
  } // namespace MobSkills_

  struct MobSkills: sqlpp::table_t<MobSkills,
               MobSkills_::MobSkillId,
               MobSkills_::MobAnimId,
               MobSkills_::MobSkillName,
               MobSkills_::MobSkillAoe,
               MobSkills_::MobSkillDistance,
               MobSkills_::MobAnimTime,
               MobSkills_::MobPrepareTime,
               MobSkills_::MobValidTargets,
               MobSkills_::MobSkillFlag,
               MobSkills_::MobSkillParam,
               MobSkills_::Knockback,
               MobSkills_::PrimarySc,
               MobSkills_::SecondarySc,
               MobSkills_::TertiarySc>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "mob_skills";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T mobSkills;
        T& operator()() { return mobSkills; }
        const T& operator()() const { return mobSkills; }
      };
    };
  };
} // namespace xidb
#endif
