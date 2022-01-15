// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse -identity-naming xidb.sql ../src/database xidb
#ifndef XIDB_MOB_SKILLS_H
#define XIDB_MOB_SKILLS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace mob_skills_
  {
    struct mob_skill_id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mob_skill_id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mob_skill_id;
            T& operator()() { return mob_skill_id; }
            const T& operator()() const { return mob_skill_id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct mob_anim_id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mob_anim_id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mob_anim_id;
            T& operator()() { return mob_anim_id; }
            const T& operator()() const { return mob_anim_id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct mob_skill_name
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mob_skill_name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mob_skill_name;
            T& operator()() { return mob_skill_name; }
            const T& operator()() const { return mob_skill_name; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct mob_skill_aoe
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mob_skill_aoe";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mob_skill_aoe;
            T& operator()() { return mob_skill_aoe; }
            const T& operator()() const { return mob_skill_aoe; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct mob_skill_distance
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mob_skill_distance";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mob_skill_distance;
            T& operator()() { return mob_skill_distance; }
            const T& operator()() const { return mob_skill_distance; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct mob_anim_time
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mob_anim_time";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mob_anim_time;
            T& operator()() { return mob_anim_time; }
            const T& operator()() const { return mob_anim_time; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct mob_prepare_time
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mob_prepare_time";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mob_prepare_time;
            T& operator()() { return mob_prepare_time; }
            const T& operator()() const { return mob_prepare_time; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct mob_valid_targets
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mob_valid_targets";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mob_valid_targets;
            T& operator()() { return mob_valid_targets; }
            const T& operator()() const { return mob_valid_targets; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct mob_skill_flag
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mob_skill_flag";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mob_skill_flag;
            T& operator()() { return mob_skill_flag; }
            const T& operator()() const { return mob_skill_flag; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct mob_skill_param
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mob_skill_param";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mob_skill_param;
            T& operator()() { return mob_skill_param; }
            const T& operator()() const { return mob_skill_param; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct knockback
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
    struct primary_sc
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "primary_sc";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T primary_sc;
            T& operator()() { return primary_sc; }
            const T& operator()() const { return primary_sc; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint>;
    };
    struct secondary_sc
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "secondary_sc";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T secondary_sc;
            T& operator()() { return secondary_sc; }
            const T& operator()() const { return secondary_sc; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint>;
    };
    struct tertiary_sc
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "tertiary_sc";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T tertiary_sc;
            T& operator()() { return tertiary_sc; }
            const T& operator()() const { return tertiary_sc; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint>;
    };
  } // namespace mob_skills_

  struct mob_skills: sqlpp::table_t<mob_skills,
               mob_skills_::mob_skill_id,
               mob_skills_::mob_anim_id,
               mob_skills_::mob_skill_name,
               mob_skills_::mob_skill_aoe,
               mob_skills_::mob_skill_distance,
               mob_skills_::mob_anim_time,
               mob_skills_::mob_prepare_time,
               mob_skills_::mob_valid_targets,
               mob_skills_::mob_skill_flag,
               mob_skills_::mob_skill_param,
               mob_skills_::knockback,
               mob_skills_::primary_sc,
               mob_skills_::secondary_sc,
               mob_skills_::tertiary_sc>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "mob_skills";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T mob_skills;
        T& operator()() { return mob_skills; }
        const T& operator()() const { return mob_skills; }
      };
    };
  };
} // namespace xidb
#endif
